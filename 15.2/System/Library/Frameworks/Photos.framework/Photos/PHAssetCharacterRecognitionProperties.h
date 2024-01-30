@class NSData, NSDate;

@interface PHAssetCharacterRecognitionProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *characterRecognitionData;
@property (readonly, nonatomic) NSData *machineReadableCodeData;
@property (readonly, nonatomic) long long algorithmVersion;
@property (readonly, nonatomic) NSDate *adjustmentVersion;

+ (id)propertiesToFetch;
+ (id)entityName;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
