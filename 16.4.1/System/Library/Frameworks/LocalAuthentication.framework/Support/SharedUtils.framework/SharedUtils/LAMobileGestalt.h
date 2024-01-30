@interface LAMobileGestalt : NSObject

+ (int)_deviceClass;
+ (unsigned long long)currentDeviceScreenSize;
+ (BOOL)isIdiomPad;
+ (BOOL)isIdiomPhone;

@end
