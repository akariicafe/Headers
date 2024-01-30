@interface CRAttestationDeviceGen4Handler : CRAttestationBaseDeviceHandler

+ (id)getDeviceHandlerForProductType:(int)a0;
+ (BOOL)isGen4Device:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
