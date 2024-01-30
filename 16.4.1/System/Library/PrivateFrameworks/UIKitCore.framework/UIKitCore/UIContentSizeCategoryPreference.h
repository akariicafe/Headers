@class NSString;

@interface UIContentSizeCategoryPreference : NSObject

@property (retain, nonatomic) NSString *preferredContentSizeCategory;
@property (retain, nonatomic) NSString *preferredContentSizeCategoryCarPlay;

+ (id)system;
+ (void)asyncOverrideSystemWithPreference:(id)a0;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)a0 forBlock:(id /* block */)a1;
+ (void)_overrideSystemPreferenceToContentSizeCategory:(id)a0;
+ (void)overrideSystemWithPreference:(id)a0;
+ (void)_populateUserDefaultsContentSizeCategory:(id *)a0 carPlay:(id *)a1;
+ (void)overrideSystemWithPreference:(id)a0 forBlock:(id /* block */)a1;
+ (void)_resetSystemPreferenceOverride;
+ (void)asyncResetSystemPreferenceOverride;
+ (void)resetSystemPreferenceOverride;

- (id)initWithRawUserDefaults;
- (id)initWithContentSizeCategory:(id)a0 carPlay:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)checkForChanges;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithContentSizeCategory:(id)a0;

@end
