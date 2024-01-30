@class NSUUID;

@interface HMIRemovePersonsModelTask : HMIHomeTask

@property (readonly) NSUUID *sourceUUID;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)mainInsideAutoreleasePool;
- (id)initWithTaskID:(int)a0 homeUUID:(id)a1 sourceUUID:(id)a2;

@end
