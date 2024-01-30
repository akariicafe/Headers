@class NSString, PXZoomableInlineHeadersDataSource, NSDateFormatter, PXZoomableInlineHeadersLayoutSpec, NSCalendar, NSIndexSet;
@protocol PXZoomableInlineHeadersLayoutGeometrySource;

@interface PXInlineHeadersSpriteLayout : PXGItemsLayout <PXGItemsGeometry, PXGViewSource> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
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

- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)a0 inDirection:(unsigned long long)a1;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithLevel:(unsigned long long)a0;
- (void)screenScaleDidChange;
- (id)axSpriteIndexes;
- (id)itemsBetweenItem:(long long)a0 andItem:(long long)a1;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)_updateSprites;
- (void)visibleRectDidChange;
- (long long)itemClosestToItem:(long long)a0 inDirection:(unsigned long long)a1;
- (void)alphaDidChange;
- (void)update;
- (void)_bumpMediaVersion;
- (void)_setupDateFormatters;
- (void).cxx_destruct;
- (void)invalidateAnchorItemFrames;
- (void)_currentLocaleChanged:(id)a0;
- (id)itemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayout:(id)a1;
- (id)itemsGeometry;

@end
