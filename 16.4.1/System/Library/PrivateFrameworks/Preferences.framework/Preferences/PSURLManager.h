@class PSSplitViewController, PSRootController, PSListController;
@protocol PSTopLevelController;

@interface PSURLManager : NSObject

@property (retain, nonatomic) PSListController<PSTopLevelController> *topLevelController;
@property (retain, nonatomic) PSSplitViewController *splitViewController;
@property (retain, nonatomic) PSRootController *rootController;

+ (id)sharedManager;

- (void)popToRootAndSelectDefaultCategory:(BOOL)a0;
- (void)_performURLHandlingForController:(id)a0 dictionary:(id)a1 items:(id)a2 controllerNeedsPush:(BOOL)a3;
- (void)performURLHandlingForController:(id)a0 dictionary:(id)a1 items:(id)a2 controllerNeedsPush:(BOOL)a3 withCompletion:(id /* block */)a4;
- (void)handleDeferredURLForSpecifierID:(id)a0 resourceDictionary:(id)a1 objectOffsetPair:(id)a2 withCompletion:(id /* block */)a3;
- (id)urlForCurrentNavStack;
- (id)currentSpecifierIDPath;
- (id)keyValueDictionaryForURL:(id)a0;
- (void)setOffsetForController:(id)a0 fromObjectPair:(id)a1;
- (void)popToRootAndSelectDefaultCategory:(BOOL)a0 performWithoutDeferringTransitions:(BOOL)a1;
- (void)processURL:(id)a0 animated:(BOOL)a1 fromSearch:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)handleDeferredURLForSpecifierID:(id)a0 resourceDictionary:(id)a1 withCompletion:(id /* block */)a2;

@end
