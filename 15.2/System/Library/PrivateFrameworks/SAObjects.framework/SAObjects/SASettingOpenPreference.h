@class NSString;

@interface SASettingOpenPreference : SASettingOpenSettings

@property (copy, nonatomic) NSString *pane;
@property (copy, nonatomic) NSString *tag;

+ (id)openPreference;
+ (id)openPreferenceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
