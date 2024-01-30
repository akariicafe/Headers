@class NSString, PXZoomableInlineHeadersDataSource, NSDateFormatter, PXZoomableInlineHeadersLayoutSpec, NSCalendar, NSIndexSet;
@protocol PXZoomableInlineHeadersLayoutGeometrySource;

@interface PXInlineHeadersSpriteLayout : PXGItemsLayout <PXGItemsGeometry, PXGViewSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; } _updateFlags;
    NSDateFormatter *_yearFormatter;
    NSDateFormatter *_monthFormatter;
    NSCalendar *_calendar;
    unsigned short _mediaVersion;
    BOOL _didHideSprites;
    NSIndexSet *_axSpriteIndexes;
}

@property (readonly, nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) PXZoomableInlineHeadersLayoutSpec *spec;
@property (retain, nonatomic) PXZoomableInlineHeadersDataSource *dataSource;
@property (weak, nonatomic) id<PXZoomableInlineHeadersLayoutGeometrySource> geometrySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (id)initWithLevel:(unsigned long long)a0;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayout:(id)a1;
- (void)alphaDidChange;
- (void)_currentLocaleChanged:(id)a0;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)invalidateAnchorItemFrames;
- (id)axSpriteIndexes;
- (void)_bumpMediaVersion;
- (id)itemsBetweenItem:(long long)a0 andItem:(long long)a1;
- (void)_updateSprites;
- (void)screenScaleDidChange;
- (void)update;
- (void)visibleRectDidChange;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)itemsGeometry;
- (long long)itemClosestToItem:(long long)a0 inDirection:(unsigned long long)a1;
- (void)_setupDateFormatters;

@end
