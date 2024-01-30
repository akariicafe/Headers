@interface NGMProtocolVersion : NSObject

+ (unsigned int)supportedVersion;
+ (BOOL)isVersionSupported:(unsigned int)a0;

@end
