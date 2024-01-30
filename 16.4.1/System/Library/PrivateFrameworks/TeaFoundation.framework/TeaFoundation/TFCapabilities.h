@interface TFCapabilities : NSObject

+ (BOOL)isHardwareKeyboardAttached;
+ (BOOL)isInternalBuild;
+ (BOOL)hasExtendedColorDisplay;
+ (BOOL)isTall;

@end
