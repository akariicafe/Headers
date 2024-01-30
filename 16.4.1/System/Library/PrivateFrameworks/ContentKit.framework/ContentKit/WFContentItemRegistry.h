@class NSMutableDictionary, NSSet, NSMutableSet;

@interface WFContentItemRegistry : NSObject

@property (class, readonly, nonatomic) WFContentItemRegistry *sharedRegistry;

@property (readonly, nonatomic) NSMutableDictionary *contentItemClassesByType;
@property (readonly, nonatomic) NSMutableSet *allItemClasses;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } discoveryLock;
@property (readonly, nonatomic) NSSet *contentItemClasses;
@property (readonly, nonatomic) NSSet *allOwnedTypes;

+ (id)allContentItemClassesInContentKit;
+ (id)inputContentItemClassesMatchingShortcutInputClasses:(id)a0;
+ (id)shortcutInputClassesMatchingInputContentItemsOfClasses:(id)a0 hostBundleIdentifier:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)a0 hostBundleIdentifier:(id)a1;
- (Class)contentItemClassForType:(id)a0;
- (id)contentItemClassesSupportingType:(id)a0;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)a0;
- (void)rediscoverContentItemClassesIfNeeded;
- (void)registerContentItemClass:(Class)a0;

@end
