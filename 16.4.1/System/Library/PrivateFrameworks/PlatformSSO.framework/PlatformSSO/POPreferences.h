@interface POPreferences : NSObject

@property (class, readonly, nonatomic) BOOL requireRootCAInSystemTrustStore;
@property (class, readonly, nonatomic) BOOL forceKerberosTGTExchange;

+ (BOOL)boolValueForKey:(struct __CFString { } *)a0 defaultValue:(BOOL)a1;

@end
