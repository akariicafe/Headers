@class NSUUID;

@interface HMIUpdatePersonsModelOperation : HMFOperation

@property (readonly) NSUUID *sourceUUID;
@property (readonly) NSUUID *homeUUID;
@property (readonly) BOOL external;

+ (id)logCategory;

- (id)logIdentifier;
- (void)main;
- (void).cxx_destruct;
- (id)initWithSourceUUID:(id)a0 homeUUID:(id)a1 external:(BOOL)a2;
- (void)mainInsideAutoreleasePool;
- (void)updatePersonsModelWithRetryOnError:(BOOL)a0;

@end
