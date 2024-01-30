@class PKPassView, PKPassFaceViewRendererState, PKRemoteDataAccessor, UIView, PKPass, UIImageView, PKPeerPaymentAccount, UILabel, UIColor;
@protocol PKPassLibraryDataProvider, PKPassHeaderViewDelegate;

@interface PKPassHeaderView : UIView {
    PKRemoteDataAccessor *_remoteDataAccessor;
    UIView *_passMaskView;
    UIImageView *_maskShadow;
    UILabel *_title;
    UILabel *_subtitle;
    double passImageHeight;
}

@property (retain, nonatomic) PKPass *pass;
@property (readonly, nonatomic) PKPassView *passView;
@property (nonatomic, getter=isSmall) BOOL small;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) PKPassFaceViewRendererState *rendererState;
@property (nonatomic) unsigned long long suppressedContent;
@property (nonatomic) BOOL showModificationDate;
@property (nonatomic) BOOL expiredPass;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (weak, nonatomic) id<PKPassHeaderViewDelegate> delegate;
@property (retain, nonatomic) id<PKPassLibraryDataProvider> passLibraryOverride;

- (void)_updateContent;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_resetFonts;
- (id)initWithPass:(id)a0 rendererState:(id)a1;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; })passSizeInfoForHeight:(double)a0;
- (void)_updateTextContent;
- (struct CGSize { double x0; double x1; })passViewSizeForHeight:(double)a0;
- (id)_primaryTextColor;
- (id)_secondaryTextColor;
- (void)layoutSubviews;
- (void)_passLibraryDidChange:(id)a0;
- (void)updateShadow:(double)a0;
- (void)updateModifiedDate;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPass:(id)a0;

@end
