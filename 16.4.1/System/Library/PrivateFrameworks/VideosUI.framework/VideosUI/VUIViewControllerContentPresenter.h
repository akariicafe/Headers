@class NSString, UIView;

@interface VUIViewControllerContentPresenter : NSObject

@property (nonatomic) BOOL contentHasBeenDeleted;
@property (retain, nonatomic) UIView *currentView;
@property (retain, nonatomic) UIView *rootView;
@property (nonatomic) unsigned long long currentContentViewType;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSString *noContentErrorTitle;
@property (copy, nonatomic) NSString *noContentErrorMessage;
@property (nonatomic) BOOL contentHasBeenManuallyDeleted;
@property (copy, nonatomic) NSString *deletedContentErrorMessage;
@property (retain, nonatomic) NSString *logName;

- (void).cxx_destruct;
- (id)_createAlertViewWithTitle:(id)a0 description:(id)a1;
- (id)_logNameForContentViewType:(unsigned long long)a0;
- (void)configureCurrentViewFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setRootViewForViewController:(id)a0;

@end
