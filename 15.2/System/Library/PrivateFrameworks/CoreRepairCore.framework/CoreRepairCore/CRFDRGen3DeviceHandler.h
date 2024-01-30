@interface CRFDRGen3DeviceHandler : CRFDRBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)a0;
+ (BOOL)isGen3ProductType:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getUpdateDataClassesAndInstancesWithPartSPC:(id)a0 withError:(id *)a1;
- (id)getMakeDataClassesAndInstancesWithPartSPC:(id)a0 fdrRemote:(struct __AMFDR { } *)a1 propertiesFromParam:(id)a2 makePropertiesDict:(id *)a3 fdrError:(id *)a4;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)a0 withError:(id *)a1;
- (long long)performPostSealingStage:(id)a0;
- (BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)a0 KGBSerialNumber:(id)a1 KBBSerialNumber:(id)a2 withError:(id *)a3;
- (BOOL)validateDisplaySwapped:(id)a0;

@end
