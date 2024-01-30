@class NSString, _ASIncomingCallObserver;
@protocol _ASCredentialListViewControllerDelegate;

@interface _ASCredentialListViewController : _ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate> {
    _ASIncomingCallObserver *_callObserver;
}

@property (weak, nonatomic) id<_ASCredentialListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 serviceIdentifiers:(id)a1;
- (void)_finishWithCredential:(id)a0 completion:(id /* block */)a1;
- (void)_requestDidFailWithError:(id)a0 completion:(id /* block */)a1;
- (void)prepareToCompleteRequestWithHostContext:(id)a0 credential:(id)a1 completion:(id /* block */)a2;

@end
