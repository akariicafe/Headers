@class NSSet, NSString, NSArray;
@protocol HMIHomePersonManagerDataSource;

@interface HMIFetchUnassociatedFaceCropsOperation : HMFOperation <HMFObject, HMFLogging>

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;
@property (readonly) NSSet *unassociatedFaceCrops;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (id)initWithDataSource:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)mainInsideAutoreleasePool;

@end
