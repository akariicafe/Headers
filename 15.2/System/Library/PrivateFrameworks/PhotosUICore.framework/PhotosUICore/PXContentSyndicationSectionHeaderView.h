@class NSString, SLAttributionView, SLHighlight, PXPhotosSectionHeaderLayoutSpec;
@protocol PXContentSyndicationSectionHeaderViewDelegate;

@interface PXContentSyndicationSectionHeaderView : UIView <SLAttributionViewDelegate> {
    SLAttributionView *_socialLayerAttributionView;
}

@property (retain, nonatomic) SLHighlight *socialLayerHighlight;
@property (retain, nonatomic) PXPhotosSectionHeaderLayoutSpec *spec;
@property (weak, nonatomic) id<PXContentSyndicationSectionHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)contextMenuItemsForAttributionView:(id)a0;
- (void)_updatePillAlignmentWithTraitCollection:(id)a0;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 applyLayoutToSubviews:(BOOL)a1;

@end
