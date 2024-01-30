@interface PassKitUI.AccountPromotionViewModel : NSObject <PKLinkedApplicationObserver> {
    void /* unknown type, empty encoding */ promotion;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ template;
    void /* unknown type, empty encoding */ linkedApplication;
    void /* unknown type, empty encoding */ _appStoreButtonTitle;
}

- (void)linkedApplicationDidChangeState:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
