@interface SBLegacyServices : NSObject

+ (void)_configure;
+ (id)workloop;
+ (void)checkInPorts;
+ (void)start;
+ (void)setFunction:(void *)a0 forSymbol:(const char *)a1;

@end
