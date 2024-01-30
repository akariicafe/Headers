@class NSString;

@interface HMPhotosPersonManager : HMPersonManager <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)personManagerUUIDFromUserUUID:(id)a0;

- (id)initWithUser:(id)a0;
- (id)logIdentifier;
- (id)initWithContext:(id)a0 UUID:(id)a1;

@end
