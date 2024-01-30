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

- (void)commonInit;
- (void)handleTap:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)updateFonts;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 theme:(unsigned long long)a2;
- (void)updateTheme;
- (void)loadConstraints;
- (void)unloadConstraints;
- (id)initWithTitle:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
