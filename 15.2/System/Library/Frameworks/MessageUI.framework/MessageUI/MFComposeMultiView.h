@class NSString, CNComposeHeaderLabelView, MFActivityIndicatorLabel, UILabel;
@protocol MFComposeMultiViewDelegate;

@interface MFComposeMultiView : MFMailComposeHeaderView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource> {
    MFActivityIndicatorLabel *_accountLabel;
    CNComposeHeaderLabelView *_imageSizeHeaderLabelView;
    UILabel *_imageSizeLabel;
    UILabel *_placeholderImageSizeLabel;
    BOOL _imageSizeShown;
    NSString *_accountDescription;
}

@property (nonatomic, getter=isAccountAutoselected) BOOL accountAutoselected;
@property (nonatomic) BOOL accountHasUnsafeDomain;
@property (weak, nonatomic) id<MFComposeMultiViewDelegate> scribbleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (id)accountLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;
- (id)labelColor;
- (void)setAccountDescription:(id)a0;
- (BOOL)_scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)refreshPreferredContentSize;
- (void)showLoadingState:(BOOL)a0;
- (id)_accountDescriptionAttributedString;
- (id)imageSizeLabel;
- (id)imageSizeHeaderLabelView;
- (id)placeholderImageSizeLabel;
- (void)setImageSizeDescription:(id)a0;
- (void)setShowsImageSize:(BOOL)a0;

@end
