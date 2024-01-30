@class NSArray, UIButton, NSString;
@protocol CKNicknameBannerViewDelegate;

@interface CKNicknameBannerView : CKUpdateBannerView <UITextViewDelegate>

@property (retain, nonatomic) NSArray *nicknameUpdates;
@property (nonatomic) id<CKNicknameBannerViewDelegate> delegate;
@property (retain, nonatomic) UIButton *updateButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)contactStore;
- (void)_updateAvatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)cancelGlyph;
- (id)_avatarContactForUpdate:(id)a0;
- (id)createContactForOutgoingShare;
- (void)cancelButtonTapped:(id)a0;
- (void)_updateSubtitleLabel;
- (void)overlayUpdateButtonOnSubtitleLinkAttribute;
- (void)updateButtonTapped:(id)a0;
- (double)maxLabelWidthForSize:(struct CGSize { double x0; double x1; })a0;
- (double)titleLabelAlignmentX;
- (id)createContactFromNickname:(id)a0;
- (id)setCatalystAttributedSubtitleTextBasedOnBannerStyle:(unsigned long long)a0;
- (double)avatarViewAlignmentX;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMargins;
- (id)setAttributedSubtitleTextBasedOnBannerStyle:(unsigned long long)a0 withActionButtonString:(id)a1;
- (id)nicknameController;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1 updates:(id)a2 useNamedTitles:(BOOL)a3 inUpdatesMode:(BOOL)a4;
- (void)setupViews;
- (void)_updateTitleLabel;

@end
