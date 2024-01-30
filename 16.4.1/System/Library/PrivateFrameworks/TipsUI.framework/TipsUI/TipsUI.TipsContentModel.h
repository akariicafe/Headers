@interface TipsUI.TipsContentModel : NSObject <TPSAppControllerDelegate> {
    void /* unknown type, empty encoding */ colorScheme;
    void /* unknown type, empty encoding */ _loading;
    void /* unknown type, empty encoding */ _hasLoaded;
    void /* unknown type, empty encoding */ _collections;
    void /* unknown type, empty encoding */ _contentLoadErrorType;
    void /* unknown type, empty encoding */ _currentTip;
    void /* unknown type, empty encoding */ _featuredTip;
    void /* unknown type, empty encoding */ _featuredCollection;
    void /* unknown type, empty encoding */ currentTipList;
    void /* unknown type, empty encoding */ prefetchingManager;
    void /* unknown type, empty encoding */ appController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_featuredTipController;
    void /* unknown type, empty encoding */ contentDidUpdate;
    void /* unknown type, empty encoding */ networkDidChangeToReachable;
}

- (void)appController:(id)a0 loadingContent:(BOOL)a1;
- (void)appControllerContentUpdated:(id)a0;
- (void)appControllerNetworkStateDidChangeToReachable:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
