@interface AppStoreKitInternal.InlineUnifiedMessagePresenter : NSObject <AMSUIMessageViewControllerDelegate, AMSEngagementObserver> {
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ engagement;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ metricsPipeline;
    void /* unknown type, empty encoding */ storeDataProvider;
    void /* unknown type, empty encoding */ onRecievedRequestToShowUnifiedMessage;
    void /* unknown type, empty encoding */ onRecievedRequestToHideUnifiedMessage;
    void /* unknown type, empty encoding */ inlineViewControllers;
}

- (void)engagement:(id)a0 didUpdateRequest:(id)a1 placement:(id)a2 serviceType:(id)a3;
- (void)messageViewController:(id)a0 enqueueEventWithFields:(id)a1 inTopic:(id)a2;
- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)engagement:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)engagement:(id)a0 didUpdateEngagementRequest:(id)a1 placement:(id)a2 serviceType:(id)a3 completion:(id /* block */)a4;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (id)init;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)engagement:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;

@end
