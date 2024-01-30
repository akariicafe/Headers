@class NSUUID;

@interface HMIUpdatePersonsModelOperation : HMFOperation

@property (readonly) NSUUID *sourceUUID;
@property (readonly) NSUUID *homeUUID;
@property (readonly) BOOL external;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)main;
- (id)logIdentifier;
- (id)initWithSourceUUID:(id)a0 homeUUID:(id)a1 external:(BOOL)a2;
- (void)updatePersonsModelWithRetryOnError:(BOOL)a0;

@end
