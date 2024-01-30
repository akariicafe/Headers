@class NSArray, UIButton, NSString;
@protocol CKNicknameBannerViewDelegate;

@interface CKNicknameBannerView : CKUpdateBannerView <UITextViewDelegate>

@property (retain, nonatomic) NSArray *nicknameUpdates;
@property (weak, nonatomic) id<CKNicknameBannerViewDelegate> delegate;
@property (retain, nonatomic) UIButton *updateButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contactStore;
- (BOOL)isLTR;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupViews;
- (BOOL)_allowUpdateForStyle:(unsigned long long)a0;
- (id)_avatarContactForUpdate:(id)a0;
- (void)_updateActionButton;
- (void)_updateAvatarView;
- (void)_updateCatalystActionButton;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (id)actionButtonString;
- (id)attributedSubtitleTextBasedOnBannerStyle:(unsigned long long)a0;
- (void)cancelButtonTapped:(id)a0;
- (id)cancelGlyph;
- (id)catalystAttributedSubtitleTextBasedOnBannerStyle:(unsigned long long)a0;
- (id)createContactForOutgoingShare;
- (id)createContactFromNickname:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1 updates:(id)a2 useNamedTitles:(BOOL)a3 inUpdatesMode:(BOOL)a4;
- (double)maxLabelWidthForSize:(struct CGSize { double x0; double x1; })a0;
- (id)nicknameController;
- (double)titleLabelAlignmentX;
- (void)updateButtonTapped:(id)a0;

@end
