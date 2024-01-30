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

- (long long)connectionType;
- (void)setExternalDevice:(id)a0;
- (id)externalDevice;
- (BOOL)isProxyGroupPlayer;
- (void).cxx_destruct;
- (id)designatedGroupLeader;
- (id)uniqueIdentifier;
- (BOOL)canModifyGroupMembership;
- (id)initWithDesignatedGroupLeader:(id)a0 outputDevices:(id)a1;

@end
