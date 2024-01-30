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

- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (void)setAccountDescription:(id)a0;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (BOOL)_scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;
- (void).cxx_destruct;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (id)labelColor;
- (id)accountLabel;
- (id)_accountDescriptionAttributedString;
- (id)imageSizeHeaderLabelView;
- (id)imageSizeLabel;
- (id)placeholderImageSizeLabel;
- (void)refreshPreferredContentSize;
- (void)setImageSizeDescription:(id)a0;
- (void)setShowsImageSize:(BOOL)a0;
- (void)showLoadingState:(BOOL)a0;

@end
