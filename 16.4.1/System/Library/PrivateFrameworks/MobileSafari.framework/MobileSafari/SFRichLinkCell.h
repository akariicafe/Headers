@class LPLinkMetadata, NSString, SLAttributionView, SLHighlight, UIView, UIVisualEffectView, LPLinkView;

@interface SFRichLinkCell : UICollectionViewCell <WBSStartPageRichLinkProxy> {
    UIVisualEffectView *_linkBackgroundView;
    UIView *_linkViewContainer;
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

- (id)initWithCoder:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)_updateVibrancy;
- (BOOL)shouldShowContextMenuFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateAttributionViewBackground;

@end
