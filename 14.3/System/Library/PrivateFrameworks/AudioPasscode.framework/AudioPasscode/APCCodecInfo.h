@interface APCCodecInfo : NSObject

+ (id)supportedConfigurationClasses;
+ (id)supportedDecoders;
+ (id)supportedEncoders;
+ (Class)configurationClassForName:(id)a0;
+ (BOOL)isSupportedCodecCapability:(id)a0;
+ (BOOL)isSupportedCodecConfiguration:(id)a0;

@end
