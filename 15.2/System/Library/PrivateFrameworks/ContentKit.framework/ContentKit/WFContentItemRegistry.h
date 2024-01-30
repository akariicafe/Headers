@class NSSet, NSMutableDictionary, NSMutableSet;

@interface WFContentItemRegistry : NSObject

@property (readonly, nonatomic) NSMutableDictionary *contentItemClassesByType;
@property (readonly, nonatomic) NSMutableSet *allItemClasses;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } discoveryLock;
@property (readonly, nonatomic) NSSet *contentItemClasses;
@property (readonly, nonatomic) NSSet *allOwnedTypes;

+ (id)sharedRegistry;
+ (id)shortcutInputClassesMatchingInputContentItemsOfClasses:(id)a0 hostBundleIdentifier:(id)a1;
+ (id)inputContentItemClassesMatchingShortcutInputClasses:(id)a0;
+ (id)allContentItemClassesInContentKit;

- (void).cxx_destruct;
- (id)init;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)a0 hostBundleIdentifier:(id)a1;
- (id)contentItemClassesSupportingType:(id)a0;
- (Class)contentItemClassForType:(id)a0;
- (void)rediscoverContentItemClassesIfNeeded;
- (void)registerContentItemClass:(Class)a0;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)a0;

@end
