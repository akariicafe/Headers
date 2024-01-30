@class NSArray, _UICommandIdentifierDictionary, UIMenuSystem, NSMutableSet, NSMutableDictionary;

@interface _UIMenuBuilder : NSObject <NSCopying, UIMenuBuilder> {
    struct { NSMutableSet *keyCommands; NSMutableDictionary *menus; NSMutableDictionary *actions; _UICommandIdentifierDictionary *commands; NSMutableDictionary *parentMenuIdentifiers; _UICommandIdentifierDictionary *commandParentMenuIdentifiers; } _analysis;
    NSArray *_keyCommandsCache;
}

@property (weak, nonatomic) UIMenuSystem *system;
@property (readonly, nonatomic) unsigned long long _changeCount;
@property (readonly, nonatomic) unsigned long long _actualChangeCount;
@property (readonly, nonatomic) NSArray *_keyCommands;

- (id)commandForAction:(SEL)a0 propertyList:(id)a1;
- (id)_firstValidMenuWithinIdentifiers:(id)a0;
- (void)replaceChildrenOfMenuForIdentifier:(id)a0 fromChildrenBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_insertMenu:(id)a0 intoParentMenu:(id)a1 newParentMenu:(id /* block */)a2;
- (void)insertChildMenu:(id)a0 atStartOfMenuForIdentifier:(id)a1;
- (void)replaceMenuForIdentifier:(id)a0 withMenu:(id)a1;
- (void)insertSiblingMenu:(id)a0 afterMenuForIdentifier:(id)a1;
- (void)_setNeedsRecacheCommands;
- (BOOL)_isInternallyConsistent;
- (void)_recacheCommandsIfNeeded;
- (id)initWithRootMenu:(id)a0;
- (id)menuForIdentifier:(id)a0;
- (id)initWithSystem:(id)a0 analysis:(struct { id x0; id x1; id x2; id x3; id x4; id x5; })a1;
- (id)actionForIdentifier:(id)a0;
- (void)removeMenuForIdentifier:(id)a0;
- (void)_patch:(id)a0;
- (id)_internalDiffForDiffv1:(id)a0;
- (void)_replaceMenu:(id)a0 withMenu:(id)a1;
- (void)_patchInternalDiff:(id)a0;
- (void)insertSiblingMenu:(id)a0 beforeMenuForIdentifier:(id)a1;
- (id)_parentOfMenuForIdentifier:(id)a0 commandForIdentifier:(id)a1;
- (void)insertChildMenu:(id)a0 atEndOfMenuForIdentifier:(id)a1;

@end
