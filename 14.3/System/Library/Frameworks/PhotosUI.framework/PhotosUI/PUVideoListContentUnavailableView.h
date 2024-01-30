@class UILabel, NSArray;

@interface PUVideoListContentUnavailableView : UIView {
    BOOL _needsUpdateConstraints;
}

@property (retain, nonatomic) UILabel *messageLabel1;
@property (retain, nonatomic) UILabel *messageLabel2;
@property (copy, nonatomic, setter=_setConstraints:) NSArray *constraints;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } safeAreaLayoutGuideFrameRect;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_invalidateConstraints;
- (void)_setMessageText:(id)a0 toLabel:(id)a1;
- (id)_messageLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateConstraintsIfNeeded;

@end
