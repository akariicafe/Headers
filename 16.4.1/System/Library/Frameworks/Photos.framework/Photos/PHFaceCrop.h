@class NSData;

@interface PHFaceCrop : PHObject

@property (readonly, nonatomic) NSData *resourceData;
@property (readonly, nonatomic) short state;
@property (readonly, nonatomic) short type;

+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)_trainingFaceCropByUUIDForPerson:(id)a0 options:(id)a1;
+ (id)fetchFaceCropByFaceLocalIdentifierForFaces:(id)a0 fetchOptions:(id)a1;
+ (id)fetchFaceCropsForPerson:(id)a0 options:(id)a1;
+ (id)fetchFaceCropsNeedingFaceDetectionWithOptions:(id)a0;
+ (id)fetchFaceCropsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchFaceCropsWithOptions:(id)a0;
+ (id)fetchTransientTrainingFaceCropsForPerson:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
