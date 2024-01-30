@interface SBLegacyServices : NSObject

+ (void)_configure;
+ (id)workloop;
+ (void)start;
+ (void)checkInPorts;
+ (void)setFunction:(void *)a0 forSymbol:(const char *)a1;

@end
