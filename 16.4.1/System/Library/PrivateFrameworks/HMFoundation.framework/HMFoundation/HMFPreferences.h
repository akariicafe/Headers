@class NSArray, NSString, NSMutableDictionary, HMFClassRegistry;

@interface HMFPreferences : HMFObject <HMFObject> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSMutableDictionary *_preferences;
}

@property (readonly) HMFClassRegistry *classRegistry;
@property (readonly, copy) NSArray *preferences;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultValues;
+ (void)setPreferenceClass:(Class)a0 forPreferenceKey:(id)a1;
+ (id)sharedPreferences;
+ (id)classRegistry;
+ (Class)preferenceClassForPreferenceKey:(id)a0;
+ (id)defaultValueForPreferenceKey:(id)a0;
+ (void)setDefaultValue:(id)a0 forPreferenceKey:(id)a1;

- (void)setPreferenceClass:(Class)a0 forPreferenceKey:(id)a1;
- (Class)preferenceClassForPreferenceKey:(id)a0;
- (id)preferenceForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
