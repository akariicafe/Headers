@interface TFCapabilities : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isHardwareKeyboardAttached;
+ (BOOL)hasExtendedColorDisplay;

@end
