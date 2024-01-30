@class PUParallaxLayerLayoutInfo, CALayer, UIView, PFParallaxLayer;

@interface PUParallaxLayerView : UIView

@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backfillView;
@property (retain, nonatomic) UIView *backfillMaskView;
@property (retain, nonatomic) PUParallaxLayerLayoutInfo *currentLayoutInfo;
@property (readonly, nonatomic) CALayer *maskLayer;
@property (retain, nonatomic) PFParallaxLayer *parallaxLayer;
@property (retain, nonatomic) PFParallaxLayer *backfillParallaxLayer;
@property (nonatomic) BOOL backfillMaskingEnabled;

- (void).cxx_destruct;
- (void)layoutWithInfo:(id)a0;
- (void)_layoutWithCurrentLayoutInfo;
- (void)_updateParallaxBackfillLayerProperties;
- (void)_updateParallaxBackfillMaskingProperties;
- (void)_updateParallaxLayerProperties;
- (id)initWithParallaxLayer:(id)a0 isEditing:(BOOL)a1;

@end
