@interface LegacyTileLayer : CALayer

@property (nonatomic) unsigned int paintCount;
@property (nonatomic) struct LegacyTileGrid { struct LegacyTileCache *x0; struct RetainPtr<CALayer> { void *x0; } x1; struct IntPoint { int x0; int x1; } x2; struct IntSize { int x0; int x1; } x3; float x4; struct HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile, WTF::DumbPtrTraits<WebCore::LegacyTileGridTile> >, WTF::DefaultHash<WebCore::IntPoint>, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile, WTF::DumbPtrTraits<WebCore::LegacyTileGridTile> > > > { struct HashTable<WebCore::IntPoint, WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile, WTF::DumbPtrTraits<WebCore::LegacyTileGridTile> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile, WTF::DumbPtrTraits<WebCore::LegacyTileGridTile> > > >, WTF::DefaultHash<WebCore::IntPoint>, WTF::HashMap<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile, WTF::DumbPtrTraits<WebCore::LegacyTileGridTile> >, WTF::DefaultHash<WebCore::IntPoint>, WTF::HashTraits<WebCore::IntPoint>, WTF::HashTraits<WTF::RefPtr<WebCore::LegacyTileGridTile, WTF::DumbPtrTraits<WebCore::LegacyTileGridTile> > > >::KeyValuePairTraits, WTF::HashTraits<WebCore::IntPoint> > { struct KeyValuePair<WebCore::IntPoint, WTF::RefPtr<WebCore::LegacyTileGridTile, WTF::DumbPtrTraits<WebCore::LegacyTileGridTile> > > *x0; } x0; } x5; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x6; } *tileGrid;
@property (readonly, nonatomic) BOOL isRenderingInContext;

- (void)layoutSublayers;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)actionForKey:(id)a0;
- (void)renderInContext:(struct CGContext { } *)a0;
- (void)drawInContext:(struct CGContext { } *)a0;

@end
