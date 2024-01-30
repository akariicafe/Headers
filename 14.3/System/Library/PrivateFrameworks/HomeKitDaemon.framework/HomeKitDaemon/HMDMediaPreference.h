@class NSString, NSArray, HMFSystemPreference, HMFPreference;

@interface HMDMediaPreference : HMFPreference <HMFObject>

@property (readonly, copy) HMFPreference *appleMediaPreference;
@property (readonly, copy) HMFPreference *airPlay2Preference;
@property (readonly) HMFSystemPreference *homeKitPreference;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 options:(unsigned long long)a1 defaultValue:(id)a2;
- (id)numberValue;
- (id)stringValue;
- (BOOL)boolValue;

@end
