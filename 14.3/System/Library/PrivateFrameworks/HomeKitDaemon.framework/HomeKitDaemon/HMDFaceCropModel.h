@class NSUUID, HMBModelUnindexedQuery, NSData, NSDate, HMBModelInfiniteQuery, HMBModelCloudReference;

@interface HMDFaceCropModel : HMBModel

@property (class, readonly, copy) NSUUID *sentinelParentUUID;
@property (class, readonly, nonatomic) HMBModelInfiniteQuery *faceCropsForPersonQuery;
@property (class, readonly, nonatomic) HMBModelUnindexedQuery *faceCropsForAnyPersonQuery;
@property (class, readonly, nonatomic) HMBModelUnindexedQuery *faceCropsForNoPersonQuery;
@property (class, readonly, nonatomic) HMBModelInfiniteQuery *faceCropsWithUnassociatedFaceCropUUIDQuery;

@property (retain) NSData *faceBoundingBoxData;
@property (retain) NSData *dataRepresentation;
@property (retain) NSDate *dateCreated;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } faceBoundingBox;
@property (retain) HMBModelCloudReference *person;
@property (retain) NSUUID *unassociatedFaceCropUUID;

+ (id)hmbProperties;
+ (id)hmbQueries;

- (id)initWithPersonFaceCrop:(id)a0;
- (id)createFaceCrop;
- (id)createPersonFaceCrop;

@end
