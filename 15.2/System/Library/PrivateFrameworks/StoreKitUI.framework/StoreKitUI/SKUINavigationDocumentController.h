@class UINavigationController, NSString, SKUIClientContext, NSMutableArray;
@protocol SKUINavigationDocumentDelegate;

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController> {
    NSMutableArray *_pendingNavigationStackEnsureConsistencyRequests;
}

@property (retain, nonatomic) UINavigationController *moreNavigationController;
@property (readonly, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUINavigationDocumentDelegate> delegate;
@property (retain, nonatomic) UINavigationController *overrideNavigationController;
@property (readonly, copy, nonatomic) NSMutableArray *documentStackItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (id)initWithNavigationController:(id)a0;
- (void).cxx_destruct;
- (void)removeDocument:(id)a0;
- (id)documents;
- (void)popToDocument:(id)a0;
- (void)pushDocument:(id)a0 options:(id)a1;
- (void)insertDocument:(id)a0 beforeDocument:(id)a1 options:(id)a2;
- (void)replaceDocument:(id)a0 withDocument:(id)a1 options:(id)a2;
- (void)popDocument;
- (void)popToRootDocument;
- (void)_scheduleFlushingPendingNavigationStackEnsureConsistencyRequestsWithTransitionCoordinator:(id)a0;
- (void)_ensureStackConsistencyForNavigationControllerOperation:(long long)a0 operationDidComplete:(BOOL)a1;
- (void)_unloadAllStackItems;
- (void)_handleStackDidChange;
- (id)_activeNavigationController;
- (void)popAllDocuments;
- (void)_applyDocumentReplacementForOldStackItem:(id)a0 atOldIndex:(long long)a1 withStackItem:(id)a2;
- (void)ensureStackConsistencyForNavigationControllerOperation:(long long)a0 operationDidComplete:(BOOL)a1;
- (void)setStackItems:(id)a0 animated:(BOOL)a1;

@end
