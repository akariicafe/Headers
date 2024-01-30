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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeScreenAppLayout;
+ (id)appLayoutWithProtobufRepresentation:(id)a0;

- (void)enumerate:(id /* block */)a0;
- (id)allItems;
- (id)protobufRepresentation;
- (BOOL)containsAnyItemFromSet:(id)a0;
- (BOOL)containsItemWithBundleIdentifier:(id)a0;
- (id)plistRepresentation;
- (id)init;
- (long long)layoutRoleForItem:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithPlistRepresentation:(id)a0;
- (BOOL)containsItemWithUniqueIdentifier:(id)a0;
- (id)succinctDescription;
- (long long)compare:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned long long)frameOptions;
- (BOOL)containsItem:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithItemsForLayoutRoles:(id)a0 configuration:(long long)a1 environment:(long long)a2 hidden:(BOOL)a3;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)switcherLayoutElementType;
- (id)appLayoutWithItemsPassingTest:(id /* block */)a0;
- (id)initWithItemsForLayoutRoles:(id)a0 configuration:(long long)a1 environment:(long long)a2;
- (id)itemForLayoutRole:(long long)a0;
- (id)appLayoutByModifyingHiddenState:(BOOL)a0;

@end
