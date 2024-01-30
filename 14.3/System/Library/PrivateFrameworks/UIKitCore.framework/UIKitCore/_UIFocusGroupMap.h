@class _UIFocusGroup, NSMapTable;

@interface _UIFocusGroupMap : NSObject {
    NSMapTable *_environmentToGroupMap;
    NSMapTable *_identifierToGroupMap;
    NSMapTable *_identifierToPrimaryItemMap;
    _UIFocusGroup *_nullGroup;
}

- (id)init;
- (void).cxx_destruct;
- (id)focusGroupForEnvironment:(id)a0;
- (id)primaryFocusItemForGroup:(id)a0;
- (id)_focusGroupForIdentifier:(id)a0 withParent:(id)a1 groupRootEnvironment:(id)a2;

@end
