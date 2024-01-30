@interface NewsEngagement.EngagementEventProvider : NSObject <AMSEngagementObserver> {
    void /* unknown type, empty encoding */ observersStore;
    void /* unknown type, empty encoding */ engagement;
}

- (void)engagement:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (void)engagement:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)engagement:(id)a0 didUpdateRequest:(id)a1 placement:(id)a2 serviceType:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
