@class NSString;

@interface UIContentSizeCategoryPreference : NSObject

@property (retain, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) NSString *preferredContentSizeCategoryCarPlay;

+ (void)overrideSystemWithPreference:(id)a0;
+ (id)system;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)a0 forBlock:(id /* block */)a1;
+ (void)_resetSystemPreferenceOverride;
+ (void)_populateUserDefaultsContentSizeCategory:(id *)a0 carPlay:(id *)a1;
+ (void)asyncOverrideSystemWithPreference:(id)a0;
+ (void)resetSystemPreferenceOverride;
+ (void)asyncResetSystemPreferenceOverride;
+ (void)overrideSystemWithPreference:(id)a0 forBlock:(id /* block */)a1;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)a0;

- (void)checkForChanges;
- (id)initWithRawUserDefaults;
- (id)description;
- (id)initWithContentSizeCategory:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithContentSizeCategory:(id)a0 carPlay:(id)a1;

@end
