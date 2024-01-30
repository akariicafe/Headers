@class NSArray, NSString, CARPFClassRegistry, NSMutableDictionary;

@interface CARPFPreferences : CARPFObject <CARPFObject> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSMutableDictionary *_preferences;
}

@property (readonly) CARPFClassRegistry *classRegistry;
@property (readonly, copy) NSArray *preferences;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)preferenceClassForPreferenceKey:(id)a0;
+ (void)setPreferenceClass:(Class)a0 forPreferenceKey:(id)a1;
+ (id)classRegistry;
+ (id)defaultValues;
+ (id)sharedPreferences;
+ (void)setDefaultValue:(id)a0 forPreferenceKey:(id)a1;
+ (id)defaultValueForPreferenceKey:(id)a0;

- (Class)preferenceClassForPreferenceKey:(id)a0;
- (void)setPreferenceClass:(Class)a0 forPreferenceKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)preferenceForKey:(id)a0;

@end
