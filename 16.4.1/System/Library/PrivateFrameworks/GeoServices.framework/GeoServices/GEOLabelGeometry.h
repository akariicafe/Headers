@class NSArray;

@interface GEOLabelGeometry : NSObject

@property (readonly, nonatomic) NSArray *labelShape;
@property (readonly, nonatomic) BOOL hasSelectionPolygon;

- (void).cxx_destruct;
- (id)initWithGEOPDLabelGeometry:(id)a0;
- (id)initWithLabelShape:(id)a0 hasSelectionPolygon:(BOOL)a1;

@end
