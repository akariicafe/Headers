@class NSSet, NSString, NSArray;
@protocol HMIPersonManagerDataSource;

@interface HMIFetchPersonsOperation : HMFOperation <HMFObject, HMFLogging>

@property (readonly) id<HMIPersonManagerDataSource> dataSource;
@property (readonly) NSSet *persons;
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

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)main;

@end
