@class NSSet, NSString, HMIPerson, NSArray;
@protocol HMIPersonManagerDataSource;

@interface HMIFetchPersonFaceCropsOperation : HMFOperation <HMFObject, HMFLogging>

@property (readonly) id<HMIPersonManagerDataSource> dataSource;
@property (readonly) HMIPerson *person;
@property (readonly) NSSet *personFaceCrops;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)main;
- (id)initWithDataSource:(id)a0 person:(id)a1;

@end
