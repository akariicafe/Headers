@class NSDictionary;

@interface CHStrokeClutterFilter : NSObject <NSCopying> {
    void *_heatMap;
    NSDictionary *_CHStrokeID2HeatmapItemID;
    NSDictionary *_heatmapItemID2CHStrokeID;
}

@property (readonly, nonatomic) long long highDensityStrokeCount;

- (BOOL)isEmpty;
- (id)debugQuickLookObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)strokeIDsWithinRectangleRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)clutterFilterByAddingStrokes:(id)a0 removingStrokeIdentifiers:(id)a1 affectedStrokeIdentifiers:(id *)a2;
- (id)initWithCanvasHeatmap:(void *)a0 stroke2ItemMapping:(id)a1 item2StrokeMapping:(id)a2;
- (BOOL)isHighDensityStroke:(id)a0;

@end
