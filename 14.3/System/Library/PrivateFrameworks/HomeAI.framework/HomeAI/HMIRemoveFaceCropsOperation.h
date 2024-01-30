@class NSSet;
@protocol HMIHomePersonManagerDataSource;

@interface HMIRemoveFaceCropsOperation : HMFOperation

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;
@property (readonly) NSSet *faceCropUUIDs;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0 faceCropUUIDs:(id)a1;

@end
