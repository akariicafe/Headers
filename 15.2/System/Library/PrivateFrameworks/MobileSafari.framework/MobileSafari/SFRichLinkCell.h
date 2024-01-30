@class UIView, NSString, LPLinkView, SLAttributionView, SLHighlight, LPLinkMetadata, UIVisualEffectView, NSLayoutConstraint;

@interface SFRichLinkCell : UICollectionViewCell <SFRichLinkModel> {
    UIVisualEffectView *_linkBackgroundView;
    UIView *_linkViewContainer;
    NSLayoutConstraint *_attributionViewHeightConstraint;
    LPLinkView *_linkView;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (readonly, nonatomic) UIView *contextMenuPreviewView;
@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (retain, nonatomic) SLHighlight *highlight;
@property (retain, nonatomic) SLAttributionView *attributionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateVibrancy;
- (void)setHighlighted:(BOOL)a0;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)shouldShowContextMenuFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateAttributionViewBackground;

@end
