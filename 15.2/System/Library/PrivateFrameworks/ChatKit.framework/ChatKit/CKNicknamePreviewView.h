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

- (void)layoutSubviews;
- (void)updateBalloonTraitCollection;
- (void)avatarDidFinishTransitionToAvatarAtIndex:(unsigned long long)a0;
- (void)runFlipAnimationOnAvatarView:(id)a0 completion:(id /* block */)a1;
- (void)setSenderLabelVisible:(BOOL)a0 completion:(id /* block */)a1;
- (id)flipAnimation;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithContact:(id)a0 avatarRecord:(id)a1;
- (void)beginAnimation;
- (void)didMoveToWindow;
- (id)imageForAvatarType:(long long)a0;
- (id)senderStringForAvatarType:(long long)a0;
- (id)balloonText;

@end
