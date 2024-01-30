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
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;

@end
