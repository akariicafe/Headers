@class NSXPCListenerEndpoint, NSArray, MRAVDistantOutputDevice, NSString, MRDistantExternalDevice, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVDistantEndpoint : MRAVEndpoint <NSSecureCoding> {
    BOOL _canModifyGroupMembership;
    long long _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceQueue;
@property (copy, nonatomic) NSArray *distantOutputDevices;
@property (copy, nonatomic) NSArray *distantPersonalOutputDevices;
@property (retain, nonatomic) MRAVDistantOutputDevice *distantGroupLeader;
@property (retain, nonatomic) MRDistantExternalDevice *distantExternalDevice;
@property (retain, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;

- (long long)connectionType;
- (id)externalDevice;
- (void)setUniqueIdentifier:(id)a0;
- (id)outputDevices;
- (id)initWithDescriptor:(id)a0;
- (id)personalOutputDevices;
- (BOOL)isProxyGroupPlayer;
- (void).cxx_destruct;
- (void)setLocalizedName:(id)a0;
- (id)localizedName;
- (id)initWithCoder:(id)a0;
- (id)designatedGroupLeader;
- (id)uniqueIdentifier;
- (BOOL)canModifyGroupMembership;
- (void)encodeWithCoder:(id)a0;

@end
