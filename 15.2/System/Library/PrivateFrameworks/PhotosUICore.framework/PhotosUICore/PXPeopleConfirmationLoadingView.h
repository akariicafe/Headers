@class UILabel, UIActivityIndicatorView, UIView;
@protocol PXPerson;

@interface PXPeopleConfirmationLoadingView : UIView

@property (readonly, nonatomic) UIView *loadingStatusView;
@property (readonly, nonatomic) UILabel *noneFoundLabel;
@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (readonly, nonatomic) id<PXPerson> person;
@property (nonatomic) unsigned long long loadingState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 person:(id)a1 localizedName:(id)a2;

@end
