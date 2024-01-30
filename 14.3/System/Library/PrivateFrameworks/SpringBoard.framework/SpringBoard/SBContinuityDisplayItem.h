@class SBBestAppSuggestion;

@interface SBContinuityDisplayItem : SBDisplayItem

@property (readonly, nonatomic) SBBestAppSuggestion *appSuggestion;

+ (id)continuityAppDisplayItemWithBundleIdentifier:(id)a0 appSuggestion:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 displayIdentifier:(id)a1 appSuggestion:(id)a2;

@end
