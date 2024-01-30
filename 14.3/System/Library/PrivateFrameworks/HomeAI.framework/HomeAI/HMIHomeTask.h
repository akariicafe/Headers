@class NSUUID;

@interface HMIHomeTask : HMITask

@property (readonly) NSUUID *homeUUID;

- (void).cxx_destruct;
- (id)initWithTaskID:(int)a0 homeUUID:(id)a1 timeout:(double)a2;

@end
