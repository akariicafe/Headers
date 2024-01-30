@interface VideosUI.UnifiedMessagingManager : NSObject <AMSEngagementObserver> {
    void /* unknown type, empty encoding */ engagement;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ fullorhalfSheetPromptedAt;
    void /* unknown type, empty encoding */ amsURLParser;
    void /* unknown type, empty encoding */ lastTabIdentifier;
    void /* unknown type, empty encoding */ placementIdMessageMap;
}

- (void)engagement:(id)a0 didUpdateRequest:(id)a1 placement:(id)a2 serviceType:(id)a3;
- (void)engagement:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)engagement:(id)a0 didUpdateEngagementRequest:(id)a1 placement:(id)a2 serviceType:(id)a3 completion:(id /* block */)a4;
- (void)engagement:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (void)dealloc;
- (void)handleDidBecomeActive;
- (id)init;
- (void).cxx_destruct;
- (id)getFullorHalfSheetPromptedAt;
- (void)handleTabBarChange:(id)a0;
- (void)markFullorHalfSheetPromptAt:(id)a0;

@end
