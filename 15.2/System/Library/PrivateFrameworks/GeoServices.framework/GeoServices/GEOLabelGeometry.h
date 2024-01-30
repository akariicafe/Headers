@class NSArray;

@interface GEOLabelGeometry : NSObject

@property (readonly, nonatomic) NSArray *labelShape;
@property (readonly, nonatomic) BOOL hasSelectionPolygon;

- (id)initWithGEOPDLabelGeometry:(id)a0;
- (void).cxx_destruct;
- (id)initWithLabelShape:(id)a0 hasSelectionPolygon:(BOOL)a1;

@end
