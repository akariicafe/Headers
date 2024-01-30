@interface GameLayerPageGrid : NSObject {
    void /* unknown type, empty encoding */ rowHeight;
    void /* unknown type, empty encoding */ representingWidth;
    void /* unknown type, empty encoding */ columnSizeCategory;
    void /* unknown type, empty encoding */ contentSizeCategory;
    void /* unknown type, empty encoding */ horizontalSizeClass;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ columnWidth;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ interColumnSpacing;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ columnCount;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ minimumInsets;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ centeringInsets;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0 traitCollection:(id)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 traitCollection:(id)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 traitCollection:(id)a1 idealColumnSizeCategory:(long long)a2;
- (id)initWithWidth:(double)a0 columnSizeCategory:(long long)a1 maxColumns:(id)a2;

@end
