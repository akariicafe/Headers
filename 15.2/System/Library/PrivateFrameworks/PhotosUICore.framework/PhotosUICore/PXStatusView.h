@class NSString, UIAlertController, PXStatusViewModel, PXContentUnavailableView;
@protocol PXStatusViewDelegate;

@interface PXStatusView : UIView <PXChangeObserver> {
    PXContentUnavailableView *_contentUnavailabilityView;
}

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) PXStatusViewModel *viewModel;
@property (weak, nonatomic) id<PXStatusViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)_updateTitle;
- (void)_updateMessage;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)_updateButtonTitle;
- (void)_handleButtonAction;
- (id)test_title;
- (id)test_message;
- (id)test_actionTitle;

@end
