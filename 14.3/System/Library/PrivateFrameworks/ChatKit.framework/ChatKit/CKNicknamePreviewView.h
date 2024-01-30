@class NSArray, CKTextBalloonView, CKCNSharingProfileAvatarItemProvider, UILabel, CNContact, CNSharingProfileAvatarItemProviderConfiguration;

@interface CKNicknamePreviewView : UIView

@property (retain, nonatomic) UILabel *senderLabel;
@property (retain, nonatomic) NSArray *avatarViews;
@property (retain, nonatomic) CKTextBalloonView *balloonView;
@property (retain, nonatomic) NSArray *senderStrings;
@property (retain, nonatomic) CKCNSharingProfileAvatarItemProvider *avatarItemProvider;
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration;
@property (nonatomic) BOOL shouldStopAnimation;

- (void).cxx_destruct;
- (id)balloonText;
- (id)flipAnimation;
- (id)imageForAvatarType:(long long)a0;
- (id)senderStringForAvatarType:(long long)a0;
- (void)updateBalloonTraitCollection;
- (void)avatarDidFinishTransitionToAvatarAtIndex:(unsigned long long)a0;
- (void)runFlipAnimationOnAvatarView:(id)a0 completion:(id /* block */)a1;
- (void)setSenderLabelVisible:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithContact:(id)a0 avatarRecord:(id)a1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)beginAnimation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
