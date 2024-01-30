@class NSString, NSDictionary, NSArray, NSMutableArray;

@interface CRFDRBaseDeviceHandler : NSObject

@property BOOL isServicePart;
@property BOOL allowFactoryReset;
@property (retain, nonatomic) NSString *sealDate;
@property (retain, nonatomic) NSString *kbbSealDate;
@property (retain, nonatomic) NSString *previousCGSN;
@property (retain, nonatomic) NSString *kbbCGSN;
@property (retain, nonatomic) NSDictionary *currentProperties;
@property (retain, nonatomic) NSArray *currentDataClasses;
@property (retain, nonatomic) NSArray *currentDataInstances;
@property (retain, nonatomic) NSString *KBBSerialNumber;
@property (retain, nonatomic) NSString *KGBSerialNumber;
@property (retain, nonatomic) NSMutableArray *warnings;

+ (id)_getDataClassUsingComponentAuthName:(id)a0;
+ (id)getPropertyArrayFrom:(id)a0;
+ (id)getSealingMap;
+ (id)copySealingManifestDataInstanceForComponent:(id)a0;
+ (BOOL)isFDRDataClassSupported:(id)a0;
+ (id)getDeviceHandlerForProductType:(int)a0;
+ (id)_populateSealingMapProperties;
+ (BOOL)isFDRPropertySupported:(id)a0;
+ (id)_populateSealingMapForCurrentDevice;
+ (void)initSealingMap;
+ (id)getRegisterChangeDictUsingComponentAuthName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_addDataClassAndInstanceToMutableDictionary:(id)a0 dataClass:(id)a1 withError:(id *)a2;
- (BOOL)_addPropertyToMutableDictionary:(id)a0 property:(id)a1 withError:(id *)a2;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)a0 withError:(id *)a1;
- (id)getCurrentManifestDataClassesAndInstancesWithPartSPC:(id)a0 fdr:(struct __AMFDR { } *)a1 currentClasses:(id *)a2 currentInstances:(id *)a3 currentProperties:(id *)a4 fdrError:(id *)a5;
- (id)getDataClassesAndInstancesOfKBBWith:(struct __AMFDR { } *)a0 propertiesDict:(id *)a1 fdrError:(id *)a2;
- (id)getExcludedPropertiesForFactoryReset;
- (BOOL)getMakeDataClassesAndInstancesWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1 propertiesFromParam:(id)a2 makeClasses:(id *)a3 makeInstances:(id *)a4 makePropertiesDict:(id *)a5 fdrError:(id *)a6;
- (BOOL)getMinimalManifestsClassesAndInstancesWithPartSPC:(id)a0 fdrLocal:(struct __AMFDR { } *)a1 fdrRemote:(struct __AMFDR { } *)a2 minimalSealingDataInstances:(id *)a3 minimalSealedDataClasses:(id *)a4 minimalSealedDataInstances:(id *)a5 error:(id *)a6;
- (BOOL)getPatchExpectedDataWithPartSPC:(id)a0 amfdr:(struct __AMFDR { } *)a1 expectedClasses:(id *)a2 expectedInstances:(id *)a3 expectedValues:(id *)a4 validClasses:(id)a5 validInstances:(id)a6 error:(id *)a7;
- (id)getSealDateFromSealingManifestData:(id)a0;
- (id)getUpdateDataClassesAndInstancesWithPartSPC:(id)a0 withError:(id *)a1;
- (long long)performPostSealingStage:(id)a0;
- (id)spcInPartSPC:(id)a0 withDataClass:(id)a1;
- (BOOL)storeWarningStrings:(id)a0;
- (double)timeIntervalSinceLastSealing:(id)a0;
- (BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)a0 KGBSerialNumber:(id)a1 KBBSerialNumber:(id)a2 withError:(id *)a3;
- (long long)validateDisplaySwapped:(id)a0 lessThan:(id)a1;
- (BOOL)validatePatchWithPartSPC:(id)a0 originalClasses:(id)a1 originalInstances:(id)a2 originalValues:(id)a3 validClasses:(id)a4 validInstances:(id)a5;
- (BOOL)validateSwappedForDays:(long long)a0 currentSN:(id)a1 previousSN:(id)a2 sealDate:(id)a3;

@end
