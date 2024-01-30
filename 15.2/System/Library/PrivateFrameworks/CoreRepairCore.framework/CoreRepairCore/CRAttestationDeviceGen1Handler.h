@interface CRAttestationDeviceGen1Handler : CRAttestationBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)a0;
+ (BOOL)isGen1Device:(int)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
