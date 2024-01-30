@class NSString;

@interface UIContentSizeCategoryPreference : NSObject

@property (retain, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) NSString *preferredContentSizeCategoryCarPlay;

+ (void)overrideSystemWithPreference:(id)a0;
+ (void)overrideSystemWithPreference:(id)a0 forBlock:(id /* block */)a1;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)a0 forBlock:(id /* block */)a1;
+ (void)_resetSystemPreferenceOverride;
+ (void)_populateUserDefaultsContentSizeCategory:(id *)a0 carPlay:(id *)a1;
+ (id)system;
+ (void)asyncOverrideSystemWithPreference:(id)a0;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)a0;
+ (void)asyncResetSystemPreferenceOverride;
+ (void)resetSystemPreferenceOverride;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRawUserDefaults;
- (id)initWithContentSizeCategory:(id)a0 carPlay:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)checkForChanges;
- (id)initWithContentSizeCategory:(id)a0;

@end
