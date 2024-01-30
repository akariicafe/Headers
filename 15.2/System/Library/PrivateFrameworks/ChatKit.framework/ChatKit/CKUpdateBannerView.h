@class UIView, NSString, UITextView, UIButton, NSDictionary, UIImageView, UIVisualEffectView, CKAvatarView;
@protocol CKBannerUpdatesViewDelegate;

@interface CKUpdateBannerView : UIView <UITextViewDelegate>

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long bannerType;
@property (nonatomic) BOOL useNamedTitles;
@property (nonatomic) BOOL useNamedSubtitles;
@property (nonatomic) BOOL inUpdatesMode;
@property (retain, nonatomic) UITextView *titleLabel;
@property (retain, nonatomic) UITextView *subtitleLabel;
@property (nonatomic) double titleLabelAlignmentX;
@property (nonatomic) double avatarViewAlignmentX;
@property (retain, nonatomic) NSDictionary *contactMap;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) CKAvatarView *avatarView;
@property (retain, nonatomic) CKAvatarView *secondaryAvatarView;
@property (retain, nonatomic) UIView *avatarCutoutView;
@property (retain, nonatomic) UIImageView *contactsIconView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) id<CKBannerUpdatesViewDelegate> updatesDelegate;
@property (retain, nonatomic) UIView *bottomSeparatorView;
@property (retain, nonatomic) UIView *topSeparatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1 useNamedTitles:(BOOL)a2 updates:(id)a3 inUpdatesMode:(BOOL)a4;
- (double)_titleLabelAlignmentX;
- (void).cxx_destruct;
- (id)cancelGlyph;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (void)addSeparators;
- (double)maxLabelWidthForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateAvatarView;
- (void)setupViews;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;

@end
