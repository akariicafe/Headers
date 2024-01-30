@interface CRAttestationDeviceGen1Handler : CRAttestationBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)a0;
+ (BOOL)isGen1Device:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
