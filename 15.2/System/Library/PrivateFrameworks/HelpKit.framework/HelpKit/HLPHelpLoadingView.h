@class UILabel, UIImageView, UIActivityIndicatorView;
@protocol HLPHelpLoadingViewDelegate;

@interface HLPHelpLoadingView : UIView {
    UIImageView *_errorImageView;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (weak, nonatomic) id<HLPHelpLoadingViewDelegate> delegate;
@property (nonatomic) BOOL supportsDarkMode;
@property (retain, nonatomic) UILabel *errorTitleLabel;
@property (retain, nonatomic) UILabel *errorMessageLabel;

- (void)updateBackgroundColor;
- (void).cxx_destruct;
- (id)init;
- (void)showActivityIndicator:(BOOL)a0;
- (void)showHelpBookInfo;
- (void)showNoConnectionErrorMessage;
- (void)showDefaultErrorMessage;
- (void)removeErrorView;
- (void)showErrorWithTitle:(id)a0 message:(id)a1;

@end
