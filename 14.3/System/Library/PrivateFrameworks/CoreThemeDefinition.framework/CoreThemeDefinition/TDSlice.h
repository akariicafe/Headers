@class TDElementProduction, TDRenditionSpec, NSString;

@interface TDSlice : NSManagedObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sliceRect;
}

@property (retain, nonatomic) TDElementProduction *production;
@property (retain, nonatomic) TDRenditionSpec *rendition;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sliceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } primitiveSliceRect;
@property (retain, nonatomic) NSString *sliceRectString;

- (void)awakeFromFetch;
- (void)setSliceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sliceRect;

@end
