@class NSString, NSDictionary, NSData, NSMutableArray;

@interface CRFDRBaseDeviceHandler : NSObject

@property BOOL isServicePart;
@property BOOL allowFactoryReset;
@property (retain, nonatomic) NSString *sealDate;
@property (retain, nonatomic) NSData *previousCGSerialNumber;
@property (retain, nonatomic) NSData *kbbCGSerialNumber;
@property (retain, nonatomic) NSDictionary *currentProperties;
@property (retain, nonatomic) NSString *KBBSerialNumber;
@property (retain, nonatomic) NSString *KGBSerialNumber;
@property (retain, nonatomic) NSMutableArray *warnings;

+ (BOOL)isFDRDataClassSupported:(id)a0;
+ (id)getDeviceHandlerForProductType:(int)a0;
+ (BOOL)isFDRPropertySupported:(id)a0;
+ (id)_populateSealingMapForCurrentDevice;
+ (id)_populateSealingMapProperties;
+ (void)initSealingMap;
+ (id)getSealingMap;
+ (id)getPropertyArrayFrom:(id)a0;
+ (id)_getDataClassUsingComponentAuthName:(id)a0;
+ (id)getRegisterChangeDictUsingComponentAuthName:(id)a0;
+ (id)copySealingManifestDataInstanceForComponent:(id)a0;
+ (id)generateNewSealingMapFromOld:(id)a0 ByRemove:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_addDataClassAndInstanceToMutableDictionary:(id)a0 dataClass:(id)a1 withError:(id *)a2;
- (id)getUpdateDataClassesAndInstancesWithPartSPC:(id)a0 withError:(id *)a1;
- (id)getMakeDataClassesAndInstancesWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1 propertiesFromParam:(id)a2 makePropertiesDict:(id *)a3 fdrError:(id *)a4;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)a0 withError:(id *)a1;
- (long long)performPostSealingStage:(id)a0;
- (id)getDataClassesAndInstancesOfKBBWith:(struct __AMFDR { } *)a0 propertiesDict:(id *)a1 fdrError:(id *)a2;
- (BOOL)_addPropertyToMutableDictionary:(id)a0 property:(id)a1 withError:(id *)a2;
- (BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)a0 KGBSerialNumber:(id)a1 KBBSerialNumber:(id)a2 withError:(id *)a3;
- (BOOL)isTimeExpiredForPartsUnswapped:(long long)a0;
- (BOOL)validateDisplaySwapped:(id)a0;
- (id)getSealDateFromSealingManifestData:(struct __CFData { } *)a0;
- (double)timeIntervalSinceLastSealing;
- (id)getCurrentManifestDataClassesAndInstancesWithPartSPC:(id)a0 fdr:(struct __AMFDR { } *)a1 properties:(id *)a2 fdrError:(id *)a3;
- (long long)validatePartsSwapped:(id)a0;
- (BOOL)storeWarningStrings:(id)a0;

@end
