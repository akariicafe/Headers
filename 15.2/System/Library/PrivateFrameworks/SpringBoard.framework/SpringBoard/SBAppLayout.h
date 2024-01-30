@class NSString, NSDictionary;

@interface SBAppLayout : NSObject <NSCopying, BSDescriptionProviding, SBSwitcherLayoutElementProviding> {
    long long _cachedAppLayoutType;
    unsigned long long _cachedHash;
    long long _configuration;
    NSDictionary *_rolesToLayoutItemsMap;
}

@property (readonly, nonatomic) long long configuration;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic, getter=isInsetForHomeAffordance) BOOL insetForHomeAffordance;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) long long centerConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeScreenAppLayout;
+ (id)appLayoutWithProtobufRepresentation:(id)a0;

- (void)enumerate:(id /* block */)a0;
- (id)allItems;
- (long long)compare:(id)a0;
- (BOOL)containsItemWithUniqueIdentifier:(id)a0;
- (id)anyLeafAppLayout;
- (BOOL)containsAnyItemFromAppLayout:(id)a0;
- (id)leafAppLayoutForItem:(id)a0;
- (id)appLayoutByModifyingHiddenState:(BOOL)a0;
- (BOOL)containsAllItemsFromAppLayout:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithItemsForLayoutRoles:(id)a0 configuration:(long long)a1 environment:(long long)a2 hidden:(BOOL)a3;
- (id)succinctDescription;
- (BOOL)isSplitConfiguration;
- (unsigned long long)switcherLayoutElementType;
- (id)initWithItemsForLayoutRoles:(id)a0 configuration:(long long)a1 environment:(long long)a2;
- (id)appLayoutByModifyingEnvironment:(long long)a0;
- (BOOL)containsAnyItemFromSet:(id)a0;
- (unsigned long long)frameOptions;
- (long long)layoutRoleForItem:(id)a0;
- (id)protobufRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)flippedAppLayout;
- (id)init;
- (id)itemForLayoutRole:(long long)a0;
- (id)plistRepresentation;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)appLayoutByModifyingConfiguration:(long long)a0;
- (BOOL)containsItemWithBundleIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isCenterOverFull;
- (BOOL)isCenterOverSplit;
- (BOOL)hasSameItemsInLayoutRoles:(unsigned long long)a0 asAppLayout:(id)a1;
- (id)appLayoutWithItemsPassingTest:(id /* block */)a0;
- (id)leafAppLayoutForRole:(long long)a0;
- (id)leafAppLayouts;
- (BOOL)containsItem:(id)a0;
- (id)initWithPlistRepresentation:(id)a0;
- (id)initWithItemsForLayoutRoles:(id)a0 configuration:(long long)a1 centerConfiguration:(long long)a2 environment:(long long)a3 hidden:(BOOL)a4;
- (BOOL)isOrContainsAppLayout:(id)a0;

@end
