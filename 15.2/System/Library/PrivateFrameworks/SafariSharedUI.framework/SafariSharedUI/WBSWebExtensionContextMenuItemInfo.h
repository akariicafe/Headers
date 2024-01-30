@class NSUUID, NSString, NSSet, NSArray, NSObject, NSDictionary;
@protocol NSCopying;

@interface WBSWebExtensionContextMenuItemInfo : NSObject {
    NSDictionary *_originalProperties;
}

@property (readonly, nonatomic) NSUUID *extensionIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSObject<NSCopying> *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL checked;
@property (readonly, nonatomic) BOOL visible;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, copy, nonatomic) NSSet *contexts;
@property (readonly, copy, nonatomic) NSObject<NSCopying> *parentIdentifier;
@property (readonly, copy, nonatomic) NSArray *documentURLPatterns;
@property (readonly, copy, nonatomic) NSArray *targetURLPatterns;

- (void).cxx_destruct;
- (id)initWithProperties:(id)a0 extensionIdentifier:(id)a1 outErrorMessage:(id *)a2;
- (id)_configureWithProperties:(id)a0;
- (id)itemInfoByUpdatingProperties:(id)a0 outErrorMessage:(id *)a1;
- (BOOL)_itemContextType:(long long)a0 matchesMenuContext:(id)a1 sourceURLMatchesTargetURLPatterns:(BOOL)a2 linkURLMatchesTargetURLPatterns:(BOOL)a3;
- (BOOL)canBeShownInContext:(id)a0 inheritedContextTypes:(id)a1;
- (BOOL)_containsItemContextMatchingMenuContext:(id)a0 contextTypes:(id)a1;
- (id)itemInfoByTogglingCheckedState;
- (BOOL)canBeShownInContext:(id)a0;
- (id)_titleForDisplayInContext:(id)a0;

@end
