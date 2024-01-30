@class UIStackView, UITapGestureRecognizer, NSString, UILabel, NSLayoutConstraint, TPBadgeView;
@protocol TPPillViewDelegate;

@interface TPPillView : TPControl

@property (readonly, nonatomic) TPBadgeView *badgeView;
@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UITapGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) NSLayoutConstraint *stackViewBottomAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeftAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewRightAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewTopAnchorLayoutConstraint;
@property (weak, nonatomic) id<TPPillViewDelegate> delegate;
@property (copy, nonatomic) NSString *badgeText;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long theme;

- (void).cxx_destruct;
- (void)updateFonts;
- (void)commonInit;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateTheme;
- (id)initWithTitle:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 theme:(unsigned long long)a2;
- (void)unloadConstraints;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)handleTap:(id)a0;
- (void)loadConstraints;
- (id)initWithTitle:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
