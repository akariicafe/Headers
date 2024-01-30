@class NSArray, NSString, MRExternalDevice, MRAVOutputDevice, NSObject;
@protocol OS_dispatch_queue;

@interface MRConcreteEndpoint : MRAVEndpoint {
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MRExternalDevice *_externalDevice;
    MRAVOutputDevice *_designatedGroupLeader;
    long long _connectionType;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (copy, nonatomic) NSArray *outputDevices;

- (void)setExternalDevice:(id)a0;
- (id)uniqueIdentifier;
- (id)initWithDesignatedGroupLeader:(id)a0 outputDevices:(id)a1 preferredSuffix:(id)a2;
- (BOOL)canModifyGroupMembership;
- (id)designatedGroupLeader;
- (id)externalDevice;
- (BOOL)isProxyGroupPlayer;
- (id)initWithDesignatedGroupLeader:(id)a0 outputDevices:(id)a1 preferredSuffix:(id)a2 connectionType:(long long)a3;
- (void).cxx_destruct;
- (long long)connectionType;

@end
