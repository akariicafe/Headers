@class PBFComplicationSnapshotRequest, NSMapTable, NSArray, BSUIVibrancyEffectView, NSMutableArray, CSProminentLayoutController;
@protocol PBFPosterPreview;

@interface PBFPosterGalleryPreviewComplicationContentView : UIView {
    CSProminentLayoutController *_layoutController;
    NSMapTable *_imageViewsForComplicationSnapshotRequest;
    NSMapTable *_imageViewForComplication;
    NSMutableArray *_complicationImageViews;
    NSMutableArray *_unusedComplicationImageViews;
    NSArray *_complicationSnapshotRequests;
    NSMapTable *_complicationToLayoutElement;
    PBFComplicationSnapshotRequest *_inlineComplicationSnapshotRequest;
    BSUIVibrancyEffectView *_vibrancyEffectView;
}

@property (retain, nonatomic) id<PBFPosterPreview> posterPreview;
@property (nonatomic) double posterPreviewScale;
@property (nonatomic) BOOL preferredCornerRadius;

- (void)didMoveToWindow;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_layoutController;
- (double)_cornerRadiusForComplicationSnapshotRequest:(id)a0;
- (void)_enumerateImageViewsForComplicationSnapshotRequest:(id)a0 usingBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForComplication:(id)a0;
- (BOOL)_hasComplications;
- (BOOL)_isComplicationSnapshotRequestOurs:(id)a0;
- (id)_placeImageViewForComplication:(id)a0 snapshotRequest:(id)a1;
- (void)_stopUsingComplicationImageView:(id)a0;
- (void)_updatePreviewWithComplicationImage:(id)a0 error:(id)a1 complicationSnapshotRequest:(id)a2 posterPreview:(id)a3;
- (void)prepareComplicationPreviewWithGenerator:(id)a0;
- (void)setComplicationImage:(id)a0 forComplicationSnapshotRequest:(id)a1;

@end
