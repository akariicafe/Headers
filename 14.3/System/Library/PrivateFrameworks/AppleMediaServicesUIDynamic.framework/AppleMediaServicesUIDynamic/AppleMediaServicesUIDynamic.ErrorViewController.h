@class UINavigationItem;

@interface AppleMediaServicesUIDynamic.ErrorViewController : AMSUICommonViewController <AMSUIDAirplaneModeInquiryDelegate> {
    void /* unknown type, empty encoding */ automaticRetry;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ errorMessage;
    void /* unknown type, empty encoding */ errorTitle;
    void /* unknown type, empty encoding */ airplaneModeInquiry;
    void /* unknown type, empty encoding */ cellularDataInquiry;
    void /* unknown type, empty encoding */ networkInquiry;
    void /* unknown type, empty encoding */ networkObservation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentUnavailableView;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)airplaneModeInquiryDidObserveChange:(id)a0;

@end
