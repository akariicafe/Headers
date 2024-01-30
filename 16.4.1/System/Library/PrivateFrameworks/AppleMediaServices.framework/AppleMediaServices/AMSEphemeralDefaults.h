@interface AMSEphemeralDefaults : NSObject

@property (class, nonatomic) long long HARLoggingItemLimit;
@property (class, nonatomic) BOOL preferEphemeralImageLoader;
@property (class, nonatomic) BOOL preferEphemeralURLSessions;
@property (class, nonatomic) BOOL processAssertionsEnabled;
@property (class, nonatomic) BOOL purchaseAccountFallback;
@property (class, nonatomic) BOOL suppressEngagement;

+ (void)setBagKeyRegistrationEnabled:(BOOL)a0;
+ (BOOL)bagKeyRegistrationEnabled;
+ (id)_propertyForKey:(id)a0 defaultValue:(id)a1 expectedType:(Class)a2;
+ (void)_accessDataStoreUsingBlock:(id /* block */)a0;
+ (void)_setProperty:(id)a0 forKey:(id)a1;
+ (BOOL)HARLoggingEnabled;
+ (void)setHARLoggingEnabled:(BOOL)a0;

@end
