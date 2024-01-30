@class NSArray, CKShare, UIStackView;

@interface ICCollaboratorAvatarsView : UIView

@property (retain, nonatomic) NSArray *avatarContainerViews;
@property (retain, nonatomic) UIStackView *avatarStackView;
@property (nonatomic) double borderWidth;
@property (nonatomic) double dimension;
@property (retain, nonatomic) NSArray *participants;
@property (weak, nonatomic) CKShare *share;
@property (nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double spacing;
@property (readonly, nonatomic) unsigned long long displayedAvatarCount;
@property (nonatomic) BOOL reverseZIndexing;

- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateUI;
- (id)avatarViews;
- (id)defaultAvatarImageViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)createAvatarContainerView;
- (void)setUpAvatarContainerViews;
- (void)updateShadows;

@end
