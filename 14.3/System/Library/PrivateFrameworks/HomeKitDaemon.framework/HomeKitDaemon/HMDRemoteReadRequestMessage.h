@class HMFActivity, NSUUID, NSObject, HMFMessage;
@protocol OS_dispatch_queue;

@interface HMDRemoteReadRequestMessage : HMFObject

@property (readonly, nonatomic) HMFMessage *readMessage;
@property (readonly, nonatomic) NSUUID *accessoryUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *responseQueue;
@property (readonly, nonatomic) HMFActivity *activity;

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithReadMessage:(id)a0 accessoryUUID:(id)a1 responseQueue:(id)a2 activity:(id)a3;

@end
