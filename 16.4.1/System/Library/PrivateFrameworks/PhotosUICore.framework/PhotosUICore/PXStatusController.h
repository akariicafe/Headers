@class NSString, UIAlertController, PXStatusViewModel, UIContentUnavailableConfiguration;
@protocol PXStatusControllerDelegate;

@interface PXStatusController : NSObject <PXChangeObserver>

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) PXStatusViewModel *viewModel;
@property (weak, nonatomic) id<PXStatusControllerDelegate> delegate;
@property (readonly, nonatomic) UIContentUnavailableConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTitle;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void).cxx_destruct;
- (void)_updateButtonTitle;
- (void)_handleButtonAction:(id)a0;
- (void)_updateMessage;

@end
