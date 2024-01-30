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

- (id)numberValue;
- (BOOL)boolValue;
- (id)stringValue;
- (id)initWithKey:(id)a0 options:(unsigned long long)a1 defaultValue:(id)a2;
- (void).cxx_destruct;

@end
