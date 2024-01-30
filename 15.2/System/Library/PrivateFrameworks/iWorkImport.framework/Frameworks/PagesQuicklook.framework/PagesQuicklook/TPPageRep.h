@class NSString, CALayer, TSDFill, TPiOSMarginAdjustRep;

@interface TPPageRep : TSWPPageRep <TSKChangeSourceObserver, TSDMasterDrawableDelegate> {
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    BOOL _backgroundFillRequiresLayerUpdate;
    BOOL _fillCanApplyToCALayer;
}

@property (retain, nonatomic) TSDFill *cachedBackgroundFill;
@property (readonly, nonatomic) TPiOSMarginAdjustRep *marginAdjustRep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)willBeRemoved;
- (void).cxx_destruct;
- (BOOL)masksToBounds;
- (BOOL)isOpaque;
- (void)dealloc;
- (BOOL)directlyManagesLayerContent;
- (id)backgroundFill;
- (id)bodyReps;
- (BOOL)childRepIsOnDocSetupCanvas:(id)a0;
- (BOOL)childRepIsMasterDrawable:(id)a0;
- (id)colorBehindBodyTextLayer:(id)a0;
- (BOOL)p_pageRequiresHorizontalSeparator;
- (id)parentRepForMagnification;

@end
