@class HMIFaceprinter, NSUUID, HMIGreedyClustering, NSString, NSDate, NSArray;
@protocol HMIHomePersonManagerDataSource;

@interface HMICleanupImpureHomePersonsOperation : HMFOperation <HMFObject, HMFLogging>

@property (readonly) HMIGreedyClustering *clusterer;
@property (readonly) HMIFaceprinter *faceprinter;
@property int numFailures;
@property (readonly) NSDate *targetDate;
@property (readonly) NSUUID *homeUUID;
@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;
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

- (void)main;
- (void).cxx_destruct;
- (void)removePerson:(id)a0;
- (id)fetchPersons;
- (void)removeFaceCropsWithUUIDs:(id)a0;
- (BOOL)isAffectedDate:(id)a0;
- (void)dumpFFDataToCacheForPerson:(id)a0 personFaceCrops:(id)a1;
- (id)fetchFaceCropsForPerson:(id)a0;
- (id)fetchOrCreateFaceprintsForCrops:(id)a0 person:(id)a1;
- (id)ffArchiveRootURLWithError:(id *)a0;
- (void)handleCleanupForPerson:(id)a0;
- (id)initWithHomeUUID:(id)a0 dataSource:(id)a1;
- (BOOL)isIdentityPureWithFaceprints:(id)a0 person:(id)a1;
- (void)mainInsideAutoreleasePool;
- (void)purgeURLIfNeeded:(id)a0;
- (void)reassociateFaceCropsWithUnknownSource:(id)a0 toPersonUUID:(id)a1;

@end
