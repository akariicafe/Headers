@class NSString, NSDictionary;

@interface CRFDRDisplay1DeviceHandler : CRFDRBaseDeviceHandler

@property (retain, nonatomic) NSString *KBBMLBSerialNumber;
@property (retain, nonatomic) NSDictionary *KBBTransferProperties;

+ (id)getDeviceHandlerForProductType:(int)a0;
+ (BOOL)isDisplay1ProductType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)mlbRepairChecks;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)a0;
- (id)getExcludedPropertiesForFactoryReset;
- (BOOL)getMakeDataClassesAndInstancesWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1 propertiesFromParam:(id)a2 makeClasses:(id *)a3 makeInstances:(id *)a4 makePropertiesDict:(id *)a5 fdrError:(id *)a6;
- (id)getMakeDataClassesAndInstancesWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1 propertiesFromParam:(id)a2 makePropertiesDict:(id *)a3 fdrError:(id *)a4;
- (long long)performPostSealingStage:(id)a0;
- (BOOL)syncSysConfig:(id)a0 key:(unsigned int)a1 inBuffer:(id)a2;
- (BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)a0 KGBSerialNumber:(id)a1 KBBSerialNumber:(id)a2 withError:(id *)a3;

@end
