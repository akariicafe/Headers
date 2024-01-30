@class NSUUID;

@interface HMIRemovePersonsModelTask : HMIHomeTask

@property (readonly) NSUUID *sourceUUID;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithTaskID:(int)a0 homeUUID:(id)a1 sourceUUID:(id)a2;
- (void)mainInsideAutoreleasePool;

@end
