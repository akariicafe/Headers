@class PSSplitViewController, PSRootController, PSListController;
@protocol PSTopLevelController;

@interface PSURLManager : NSObject

@property (retain, nonatomic) PSListController<PSTopLevelController> *topLevelController;
@property (retain, nonatomic) PSSplitViewController *splitViewController;
@property (retain, nonatomic) PSRootController *rootController;

+ (id)sharedManager;

- (id)urlForCurrentNavStack;
- (void)popToRootAndSelectDefaultCategory:(BOOL)a0;
- (void).cxx_destruct;
- (void)_performURLHandlingForController:(id)a0 dictionary:(id)a1 items:(id)a2 controllerNeedsPush:(BOOL)a3;
- (id)keyValueDictionaryForURL:(id)a0;
- (void)processURL:(id)a0 animated:(BOOL)a1 fromSearch:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)handleDeferredURLForSpecifierID:(id)a0 resourceDictionary:(id)a1 withCompletion:(id /* block */)a2;
- (void)popToRootAndSelectDefaultCategory:(BOOL)a0 performWithoutDeferringTransitions:(BOOL)a1;
- (void)performURLHandlingForController:(id)a0 dictionary:(id)a1 items:(id)a2 controllerNeedsPush:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void)handleDeferredURLForSpecifierID:(id)a0 resourceDictionary:(id)a1 objectOffsetPair:(id)a2 withCompletion:(id /* block */)a3;
- (void)setOffsetForController:(id)a0 fromObjectPair:(id)a1;
- (id)currentSpecifierIDPath;

@end
