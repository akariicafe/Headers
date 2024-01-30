@class HMFSystemPreference, NSString, NSArray;

@interface HMDAirPlay2Preference : HMFPreference <HMFObject>

@property (readonly) HMFSystemPreference *airPlayPreference;
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
