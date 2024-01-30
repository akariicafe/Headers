@interface AMSEphemeralDefaults : NSObject

@property (class, nonatomic) BOOL bagKeyRegistrationEnabled;
@property (class, nonatomic) BOOL HARLoggingEnabled;
@property (class, nonatomic) long long HARLoggingItemLimit;
@property (class, nonatomic) BOOL processAssertionsEnabled;

+ (void)_accessDataStoreUsingBlock:(id /* block */)a0;
+ (id)_propertyForKey:(id)a0 defaultValue:(id)a1 expectedType:(Class)a2;
+ (void)_setProperty:(id)a0 forKey:(id)a1;

@end
