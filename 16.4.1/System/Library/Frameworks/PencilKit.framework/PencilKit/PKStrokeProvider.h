@class NSArray, PKDrawing, NSOrderedSet, NSString, NSMutableOrderedSet, NSMutableDictionary;
@protocol CHStrokeProviderVersion;

@interface PKStrokeProvider : NSObject <CHStrokeProvider> {
    BOOL _disabled;
    NSMutableOrderedSet *_strokeSlices;
    BOOL _shouldProcessVisibleStrokes;
    NSArray *_visibleOnscreenStrokes;
    NSMutableDictionary *_strokeIdsByEncoding;
}

@property (readonly, nonatomic) PKDrawing *drawing;
@property (readonly) id<CHStrokeProviderVersion> strokeProviderVersion;
@property (readonly, copy) NSArray *orderedStrokes;
@property (readonly) long long groupingPriority;
@property (readonly) struct CGSize { double x0; double x1; } drawingCanvasSize;
@property (readonly, copy) NSOrderedSet *visibleStrokeEncodedIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_identifiersForStrokes:(id)a0;
+ (id)slicesForStrokes:(id)a0;

- (void).cxx_destruct;
- (id)slices;
- (id)initWithDrawing:(id)a0;
- (void)_cacheStrokeIdentifier:(id)a0 withEncodedStrokeIdentifier:(id)a1;
- (id)_cachedStrokeIdentifier:(id)a0;
- (long long)compareOrderOfStroke:(id)a0 toStroke:(id)a1;
- (long long)compareOrderOfStrokeWithIdentifier:(id)a0 toStrokeWithIdentifier:(id)a1;
- (unsigned long long)compareStyleOfStrokeWithIdentifier:(id)a0 toStrokeWithIdentifier:(id)a1;
- (id)encodedStrokeIdentifier:(id)a0;
- (BOOL)enumerateChangesSinceVersion:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithDrawing:(id)a0 visibleOnscreenStrokes:(id)a1 shouldProcessVisibleStrokes:(BOOL)a2;
- (BOOL)isStroke:(id)a0 versionOfStrokeWithIdentifier:(id)a1;
- (id)sliceForIdentifier:(id)a0;
- (id)strokeForIdentifier:(id)a0;
- (id)strokeIdentifierFromData:(id)a0;

@end
