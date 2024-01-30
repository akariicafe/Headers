@class UINavigationController, NSString, NSMutableArray, WebScriptObject;

@interface SUScriptNavigationSimulator : SUScriptObject <UINavigationControllerDelegate> {
    WebScriptObject *_transitionCallback;
}

@property (nonatomic) long long initialIndex;
@property (nonatomic) long long lastVisibleIndex;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) NSMutableArray *enqueuedTransitions;
@property (retain, nonatomic) WebScriptObject *transitionCallback;
@property (readonly, nonatomic) long long visibleIndex;
@property (readonly, nonatomic) long long indexCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (void)startTransition;
+ (BOOL)transitioning;
+ (id)webScriptNameForKeyName:(id)a0;
+ (void)stopTransition;

- (id)initWithNavigationController:(id)a0;
- (void).cxx_destruct;
- (void)setIndexCount:(long long)a0;
- (id)attributeKeys;
- (void)setVisibleIndex:(long long)a0;
- (id)_className;
- (id)scriptAttributeKeys;
- (id /* block */)_popHandler;
- (long long)_relativeIndexFromIndex:(long long)a0;
- (void)popToViewAtIndex:(long long)a0 completion:(id)a1;
- (void)_enqueueLoadingState:(id)a0;
- (void)_startNextTransition;
- (void)_handlePopFromIndex:(long long)a0 toIndex:(long long)a1;
- (void)_callCallbackWithWithTransition:(id)a0;
- (void)popViewWithCompletion:(id)a0;
- (void)pushViewWithCompletion:(id)a0;

@end
