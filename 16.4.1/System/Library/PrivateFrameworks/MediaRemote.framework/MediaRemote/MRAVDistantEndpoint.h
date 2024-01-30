@class NSXPCListenerEndpoint, NSArray, MRAVDistantOutputDevice, MRAVDistantExternalDeviceFactory, MRDistantExternalDevice, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding> {
    BOOL _canModifyGroupMembership;
    long long _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

@property (class, readonly, nonatomic) MRAVDistantExternalDeviceFactory *externalDeviceFactory;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceQueue;
@property (copy, nonatomic) NSArray *distantOutputDevices;
@property (copy, nonatomic) NSArray *distantPersonalOutputDevices;
@property (retain, nonatomic) MRAVDistantOutputDevice *distantGroupLeader;
@property (retain, nonatomic) MRDistantExternalDevice *distantExternalDevice;
@property (retain, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;

- (id)_externalOutputContext;
- (id)designatedGroupLeader;
- (void)encodeWithCoder:(id)a0;
- (void)setLocalizedName:(id)a0;
- (id)localizedName;
- (id)initWithDescriptor:(id)a0;
- (long long)connectionType;
- (id)personalOutputDevices;
- (BOOL)canModifyGroupMembership;
- (BOOL)isProxyGroupPlayer;
- (id)externalDevice;
- (id)initWithCoder:(id)a0;
- (void)setUniqueIdentifier:(id)a0;
- (id)outputDevices;
- (id)debugDescription;
- (void)dealloc;
- (void)_handleConnectionStateDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;

@end
