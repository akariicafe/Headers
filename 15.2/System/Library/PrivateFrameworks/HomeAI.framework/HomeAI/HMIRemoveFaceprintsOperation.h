@class NSSet;
@protocol HMIPersonManagerDataSource;

@interface HMIRemoveFaceprintsOperation : HMFOperation

@property (readonly) id<HMIPersonManagerDataSource> dataSource;
@property (readonly) NSSet *faceprintUUIDs;

+ (id)logCategory;

- (void)main;
- (void).cxx_destruct;
- (void)mainInsideAutoreleasePool;
- (id)initWithDataSource:(id)a0 faceprintUUIDs:(id)a1;

@end
