@class NSString, CAFilter, CALayer, PXGainMapAnimationDurationFilter;

@interface PXImageLayerModulator : NSObject <PXMutableImageLayerModulator_Private> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    struct { BOOL filterInput; BOOL filter; BOOL filteredLayer; BOOL displayingVideoComplement; BOOL filterIntensity; BOOL gainMapVisibility; BOOL gainMapAppearance; } _needsUpdateFlags;
}

@property (readonly, nonatomic) struct { long long contentFormat; long long filterType; float hdrGain; long long fallbackFilterType; float fallbackHdrGain; } options;
@property (readonly, nonatomic) long long filterType;
@property (readonly, nonatomic) float hdrGain;
@property (readonly, nonatomic) CAFilter *filter;
@property (retain, nonatomic) NSString *layerFilterIntensityKeyPath;
@property (retain, nonatomic) CALayer *filteredLayer;
@property (retain, nonatomic) CALayer *gainMapLayer;
@property (nonatomic) BOOL animateGainMapAppearance;
@property (retain, nonatomic) PXGainMapAnimationDurationFilter *gainMapAnimationDurationFilter;
@property (nonatomic) double intensityAnimationDuration;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) double intensity;
@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic, getter=isDisplayingVideoComplement) BOOL displayingVideoComplement;
@property (readonly, nonatomic) struct CGImage { } *gainMapImage;
@property (readonly, nonatomic) float gainMapValue;
@property (readonly, nonatomic) BOOL revealsGainMapImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGImage { } *)_gainMapPlaceholderImage;

- (void)setLayer:(id)a0;
- (void)setGainMapImage:(struct CGImage { } *)a0;
- (void)setGainMapValue:(float)a0;
- (void)setEnabled:(BOOL)a0;
- (void)setFilter:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (id)initWithOptions:(struct { long long x0; long long x1; float x2; long long x3; float x4; })a0;
- (void)setHdrGain:(float)a0;
- (void)setFilterType:(long long)a0;
- (void)_updateIfNeeded;
- (void)setRevealsGainMapImage:(BOOL)a0;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)prepareForReuse;
- (void)setIntensity:(double)a0;
- (void)dealloc;
- (void)_updateFilter;
- (void)setGainMapImage:(struct CGImage { } *)a0 animated:(BOOL)a1;
- (void)performChanges_Private:(id /* block */)a0;
- (void)setDisplayingVideoComplement:(BOOL)a0;
- (void)animateChangesWithDuration:(double)a0;
- (void)removeFilterFromUnownedLayer:(id)a0;
- (void)_addFilterToLayer:(id)a0;
- (void)_removeFilterFromLayer:(id)a0;
- (void)_invalidateFilterInput;
- (void)_updateFilterInput;
- (void)_invalidateFilter;
- (void)_invalidateFilteredLayer;
- (void)_updateFilteredLayerIfNeeded;
- (void)_invalidateFilterIntensity;
- (void)_updateFilterIntensityIfNeeded;
- (void)_invalidateGainMapAppearance;
- (void)_updateGainMapAppearance;
- (void)_invalidateGainMapVisibility;
- (void)_updateGainMapVisibility;

@end
