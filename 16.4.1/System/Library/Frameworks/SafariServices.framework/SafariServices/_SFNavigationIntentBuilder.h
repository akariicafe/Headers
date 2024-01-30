@interface _SFNavigationIntentBuilder : NSObject

@property (class, readonly, nonatomic) BOOL shouldOpenBookmarkFolderAsTabs;

@property (readonly, nonatomic) long long modifierFlags;
@property (nonatomic) long long navigationType;
@property (nonatomic) long long preferredTabOrder;
@property (nonatomic) BOOL prefersOpenInNewTab;
@property (nonatomic) BOOL prefersOpenInNewTabReusingExistingBlankTabIfPossible;
@property (nonatomic) BOOL prefersOpenInNewWindow;
@property (nonatomic) BOOL prefersRelationToSourceTab;
@property (nonatomic) unsigned long long neverPromptWhenOpeningMultipleIntents;

+ (id)builder;
+ (id)builderWithModifierFlags:(long long)a0;
+ (BOOL)canCreateNavigationIntentForDropSession:(id)a0;
+ (void)registerBookmarkCollectionFactory:(id /* block */)a0;

- (id)navigationIntentWithSearchText:(id)a0;
- (id)navigationIntentWithHistoryURL:(id)a0;
- (BOOL)_hasModifierFlag:(long long)a0;
- (id)_initWithModifierFlags:(long long)a0;
- (id)_initializeNavigationIntentWithType:(unsigned long long)a0 value:(id)a1;
- (BOOL)_modifiersEqualToModifierIgnoringCapsLock:(long long)a0;
- (id)_navigationIntentForMKMapItem:(id)a0;
- (id)_navigationIntentWithItems:(id)a0;
- (long long)_navigationPolicy;
- (long long)_navigationPolicyForCreatingNewTabOrWindow;
- (long long)_navigationPolicyForNavigationEvent;
- (long long)_navigationPolicyForStandardEvent;
- (BOOL)_shouldOrderToForeground;
- (void)buildNavigationIntentForDropSession:(id)a0 completionHandler:(id /* block */)a1;
- (void)buildNavigationIntentForItemProviders:(id)a0 completionHandler:(id /* block */)a1;
- (id)navigationIntentWithBookmark:(id)a0;
- (id)navigationIntentWithCloudTab:(id)a0;
- (id)navigationIntentWithHighlight:(id)a0;
- (id)navigationIntentWithMultipleIntents:(id)a0;
- (id)navigationIntentWithOpenURLContexts:(id)a0;
- (id)navigationIntentWithRecentlyClosedTabStateData:(id)a0;
- (id)navigationIntentWithText:(id)a0;
- (id)navigationIntentWithURL:(id)a0;

@end
