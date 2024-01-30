@class NSString, NSDictionary, CNLSApplicationWorkspace, CNContactProperty;

@interface CNUIUserActionItem : NSObject

@property (class, readonly, nonatomic) CNLSApplicationWorkspace *workspace;

@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) long long group;
@property (readonly, nonatomic) unsigned long long options;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *associatedRecentContactMetadata;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *targetHandle;
@property (readonly, nonatomic) NSString *sanitizedTargetHandle;
@property (readonly, nonatomic) CNContactProperty *contactProperty;
@property (readonly, nonatomic) BOOL shouldGroupByBundleIdentifier;
@property (readonly, nonatomic) BOOL shouldCurateIfPerformed;
@property (readonly, nonatomic) BOOL isSuggested;

+ (id)actionItemForContactProperty:(id)a0 actionType:(id)a1 bundleIdentifier:(id)a2;
+ (id)itemWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 userActivity:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)itemWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 userActivity:(id)a3 isSuggested:(BOOL)a4;
+ (id)itemWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 url:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)itemWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 url:(id)a3 isSensitive:(BOOL)a4 group:(long long)a5 options:(unsigned long long)a6;
+ (id)payItemWithLabel:(id)a0 targetStringValue:(id)a1 url:(id)a2 bundleIdentifier:(id)a3;
+ (id)emailItemWithLabel:(id)a0 targetStringValue:(id)a1 url:(id)a2 bundleIdentifier:(id)a3;
+ (id)textItemWithLabel:(id)a0 targetStringValue:(id)a1 url:(id)a2 bundleIdentifier:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)textItemWithLabel:(id)a0 targetPhoneNumber:(id)a1 url:(id)a2 bundleIdentifier:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)videoItemWithLabel:(id)a0 targetStringValue:(id)a1 url:(id)a2 bundleIdentifier:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)voiceItemWithLabel:(id)a0 targetStringValue:(id)a1 url:(id)a2 bundleIdentifier:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)ttyItemWithLabel:(id)a0 targetStringValue:(id)a1 url:(id)a2 bundleIdentifier:(id)a3;
+ (id)ttyRelayItemWithLabel:(id)a0 targetStringValue:(id)a1 url:(id)a2 bundleIdentifier:(id)a3;
+ (id)_voiceItemWithLabel:(id)a0 targetStringValue:(id)a1 propertyKey:(id)a2 userActivity:(id)a3 bundleIdentifier:(id)a4 group:(long long)a5 options:(unsigned long long)a6;
+ (id)payItemWithLabel:(id)a0 targetStringValue:(id)a1 userActivity:(id)a2 bundleIdentifier:(id)a3;
+ (id)emailItemWithLabel:(id)a0 targetStringValue:(id)a1 userActivity:(id)a2 bundleIdentifier:(id)a3;
+ (id)textItemWithLabel:(id)a0 targetStringValue:(id)a1 userActivity:(id)a2 bundleIdentifier:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)videoItemWithLabel:(id)a0 targetStringValue:(id)a1 userActivity:(id)a2 bundleIdentifier:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)voiceItemWithLabel:(id)a0 targetStringValue:(id)a1 userActivity:(id)a2 bundleIdentifier:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)voiceItemWithLabel:(id)a0 targetStringValue:(id)a1 propertyKey:(id)a2 userActivity:(id)a3 bundleIdentifier:(id)a4 group:(long long)a5 options:(unsigned long long)a6;
+ (id)itemWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 dialRequest:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)itemWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 dialRequest:(id)a3 isSuggested:(BOOL)a4;
+ (id)_voiceItemWithLabel:(id)a0 targetStringValue:(id)a1 propertyKey:(id)a2 dialRequest:(id)a3 bundleIdentifier:(id)a4 group:(long long)a5 options:(unsigned long long)a6;
+ (id)videoItemWithLabel:(id)a0 targetStringValue:(id)a1 dialRequest:(id)a2 bundleIdentifier:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)voiceItemWithLabel:(id)a0 targetStringValue:(id)a1 dialRequest:(id)a2 bundleIdentifier:(id)a3 group:(long long)a4 options:(unsigned long long)a5;
+ (id)voiceItemWithLabel:(id)a0 targetStringValue:(id)a1 propertyKey:(id)a2 dialRequest:(id)a3 bundleIdentifier:(id)a4 group:(long long)a5 options:(unsigned long long)a6;
+ (id)actionItemForContactProperty:(id)a0 actionType:(id)a1 bundleIdentifier:(id)a2 callProviderManager:(id)a3;
+ (id)thirdPartyCallActionItemForHandle:(id)a0 contactProperty:(id)a1 actionType:(id)a2 bundleIdentifier:(id)a3 callProviderManager:(id)a4;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)url;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)performActionWithContext:(id)a0;
- (id)initWithType:(id)a0 contactProperty:(id)a1 bundleIdentifier:(id)a2 group:(long long)a3 options:(unsigned long long)a4;
- (BOOL)shouldUseLabelForQuickActionButtonTitle;
- (BOOL)isHandledByFirstPartyApp;
- (BOOL)shouldUseApplicationNameForLabel;
- (void)associateWithRecentContactMetadata:(id)a0;
- (id)initWithItem:(id)a0 contactProperty:(id)a1;

@end
