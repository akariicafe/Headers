@class NSString, NSMapTable, NSHashTable;

@interface SBAppInteractionEventSourceManager : NSObject <SBAppInteractionEventSourceObserving, SBAppInteractionEventSourceProviding>

@property (readonly, nonatomic) NSMapTable *windowScenesToEventSources;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)windowSceneDidDisconnect:(id)a0;
- (void)windowSceneDidConnect:(id)a0;
- (void)addObserver:(id)a0;
- (void)eventSource:(id)a0 userDeletedWebBookmark:(id)a1;
- (void)eventSource:(id)a0 userTouchedApplication:(id)a1;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)eventSource:(id)a0 didBeginTransitionToMode:(long long)a1 withLayoutState:(id)a2 activatingElement:(id)a3 triggeredBy:(long long)a4;
- (void)eventSource:(id)a0 applicationsBecameHidden:(id)a1;
- (void)eventSource:(id)a0 applicationsBecameVisible:(id)a1;
- (void)eventSource:(id)a0 didFinishTransitionToMode:(long long)a1 withLayoutState:(id)a2 activatingElement:(id)a3 triggeredBy:(long long)a4;
- (void)eventSource:(id)a0 keyboardFocusChangedToApplication:(id)a1;
- (void)eventSource:(id)a0 userDeletedApplications:(id)a1;
- (void)eventSource:(id)a0 userQuitApplicationInSwitcher:(id)a1;
- (void)eventSource:(id)a0 userRemovedSuggestions:(id)a1;
- (void)eventSource:(id)a0 userTouchedApplication:(id)a1 pid:(int)a2 inContext:(unsigned int)a3;
- (id)eventSourceForWindowScene:(id)a0;

@end
