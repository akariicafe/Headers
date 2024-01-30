@class NSUUID;

@interface HMIRemovePersonsModelOperation : HMFOperation

@property (readonly) NSUUID *sourceUUID;
@property (readonly) NSUUID *homeUUID;
@property (readonly) BOOL external;

+ (id)logCategory;

- (id)logIdentifier;
- (void)main;
- (void).cxx_destruct;
- (void)mainInsideAutoreleasePool;
- (id)initWithSourceUUID:(id)a0 homeUUID:(id)a1 external:(BOOL)a2;
- (void)removePersonsModelWithRetryOnError:(BOOL)a0;

@end
