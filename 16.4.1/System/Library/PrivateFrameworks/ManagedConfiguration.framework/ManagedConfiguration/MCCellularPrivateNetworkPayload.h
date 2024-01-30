@class NSString, NSArray;

@interface MCCellularPrivateNetworkPayload : MCPayload

@property (retain, nonatomic) NSString *dataSetName;
@property (retain, nonatomic) NSString *versionNumber;
@property (retain, nonatomic) NSArray *geofenceList;
@property (nonatomic) BOOL cellularDataPreferred;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (id)title;
- (void).cxx_destruct;
- (BOOL)_checkForValidContents:(id)a0 outError:(id *)a1;
- (void)_finishInitializationWithContents:(id)a0;
- (id)_validationErrorType:(long long)a0 forInvalidKey:(id)a1;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
