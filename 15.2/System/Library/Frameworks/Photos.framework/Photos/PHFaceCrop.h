@class NSData;

@interface PHFaceCrop : PHObject

@property (readonly, nonatomic) NSData *resourceData;
@property (readonly, nonatomic) short state;
@property (readonly, nonatomic) short type;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)a0;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (id)fetchFaceCropsWithOptions:(id)a0;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)fetchFaceCropsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchTransientTrainingFaceCropsForPerson:(id)a0 options:(id)a1;
+ (id)_trainingFaceCropByUUIDForPerson:(id)a0 options:(id)a1;
+ (id)fetchFaceCropByFaceLocalIdentifierForFaces:(id)a0 fetchOptions:(id)a1;
+ (id)fetchFaceCropsForPerson:(id)a0 options:(id)a1;

- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (void).cxx_destruct;
- (Class)changeRequestClass;

@end
