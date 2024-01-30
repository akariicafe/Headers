@class UINavigationItem;

@interface AppleMediaServicesUIDynamic.ErrorViewController : AMSUICommonViewController <AMSUIDAirplaneModeInquiryDelegate> {
    void /* unknown type, empty encoding */ automaticRetry;
    void /* unknown type, empty encoding */ error;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ retryAction;
    void /* unknown type, empty encoding */ airplaneModeInquiry;
    void /* unknown type, empty encoding */ cellularDataInquiry;
    void /* unknown type, empty encoding */ networkInquiry;
    void /* unknown type, empty encoding */ networkObservation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentUnavailableView;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void)airplaneModeInquiryDidObserveChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
