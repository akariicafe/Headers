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
+ (void)startTransition;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (BOOL)transitioning;
+ (id)webScriptNameForKeyName:(id)a0;
+ (void)stopTransition;

- (void)setVisibleIndex:(long long)a0;
- (id)initWithNavigationController:(id)a0;
- (id)_className;
- (void).cxx_destruct;
- (id)attributeKeys;
- (void)setIndexCount:(long long)a0;
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
