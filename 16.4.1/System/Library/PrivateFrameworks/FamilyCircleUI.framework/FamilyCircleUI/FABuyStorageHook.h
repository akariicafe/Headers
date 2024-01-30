@class NSString, RUIObjectModel, PSCloudStorageOffersManager, RUIServerHookResponse;
@protocol RUIServerHookDelegate;

@interface FABuyStorageHook : NSObject <PSCloudStorageOffersManagerDelegate, AAUIServerHook> {
    PSCloudStorageOffersManager *_storageOffersManager;
    id /* block */ _completion;
    BOOL _loadingStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) id<RUIServerHookDelegate> delegate;

- (void).cxx_destruct;
- (void)manager:(id)a0 didCompleteWithError:(id)a1;
- (void)manager:(id)a0 loadDidFailWithError:(id)a1;
- (void)managerDidCancel:(id)a0;
- (void)processElement:(id)a0 attributes:(id)a1 objectModel:(id)a2 completion:(id /* block */)a3;
- (void)processObjectModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldMatchElement:(id)a0;
- (BOOL)shouldMatchModel:(id)a0;
- (void)_completionWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_invokeBuyStorageWithServerAttributes:(id)a0 completion:(id /* block */)a1;

@end
