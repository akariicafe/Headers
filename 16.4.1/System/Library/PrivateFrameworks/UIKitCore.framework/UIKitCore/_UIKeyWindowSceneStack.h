@class UIWindowScene, NSString, NSMapTable, NSMutableOrderedSet;

@interface _UIKeyWindowSceneStack : NSObject <BSDebugDescriptionProviding> {
    NSMapTable *_recordsByWindowScene;
    NSMutableOrderedSet *_orderedRecords;
    UIWindowScene *_keyWindowSceneInStack;
    struct { unsigned char affectsApplicationKeyWindow : 1; unsigned char hasViewServiceEntitlement : 1; } _sceneStackFlags;
    NSString *_name;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
