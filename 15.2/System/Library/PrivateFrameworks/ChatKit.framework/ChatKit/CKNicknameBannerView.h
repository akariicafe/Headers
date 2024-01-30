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

- (void)layoutSubviews;
- (id)contactStore;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)cancelGlyph;
- (BOOL)__im_ff_uiConsistencyEnabled;
- (BOOL)_allowUpdateForStyle:(unsigned long long)a0;
- (id)_avatarContactForUpdate:(id)a0;
- (id)createContactForOutgoingShare;
- (void)cancelButtonTapped:(id)a0;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (void)_updateActionButton;
- (double)maxLabelWidthForSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateButtonTapped:(id)a0;
- (double)titleLabelAlignmentX;
- (void)_updateCatalystActionButton;
- (id)actionButtonString;
- (id)attributedSubtitleTextBasedOnBannerStyle:(unsigned long long)a0;
- (id)catalystAttributedSubtitleTextBasedOnBannerStyle:(unsigned long long)a0;
- (id)nicknameController;
- (id)createContactFromNickname:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1 updates:(id)a2 useNamedTitles:(BOOL)a3 inUpdatesMode:(BOOL)a4;
- (void)_updateAvatarView;
- (void)setupViews;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)isLTR;

@end
