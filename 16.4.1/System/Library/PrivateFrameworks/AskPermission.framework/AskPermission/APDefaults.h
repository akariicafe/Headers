@interface APDefaults : NSObject

@property (class, nonatomic) BOOL APSDevelopmentEnvironment;
@property (class, nonatomic) BOOL isApprover;
@property (class, nonatomic) BOOL isRequester;
@property (class, nonatomic) BOOL retryNotificationRegistration;

+ (void)_setValue:(id)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1 domain:(struct __CFString { } *)a2;
+ (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1 domain:(struct __CFString { } *)a2;
+ (id)_valueForKey:(id)a0;
+ (void)_setBool:(BOOL)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1;
+ (void)_setInteger:(long long)a0 forKey:(id)a1;
+ (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1;
+ (void)_setBool:(BOOL)a0 forKey:(id)a1;
+ (void)_setValue:(id)a0 forKey:(id)a1;
+ (id)_valueForKey:(id)a0 domain:(struct __CFString { } *)a1;

@end
