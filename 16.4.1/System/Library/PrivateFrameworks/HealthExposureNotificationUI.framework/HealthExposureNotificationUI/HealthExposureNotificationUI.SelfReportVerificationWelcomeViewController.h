@interface HealthExposureNotificationUI.SelfReportVerificationWelcomeViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ healthAgencyModel;
    void /* unknown type, empty encoding */ regionSupportsWebReport;
    void /* unknown type, empty encoding */ regionSupportsSelfReportV1;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authorityTextView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_footerView;
    void /* unknown type, empty encoding */ titleLabelTopOffset;
}

- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;

@end
