@class UIColor;

@interface PXFaceTileImageCombinerContext : NSObject

@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly, nonatomic) BOOL isAscending;
@property (readonly, nonatomic) double imageSize;
@property (readonly, nonatomic) double imageOffset;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) double borderWidth;

- (void).cxx_destruct;
- (id)initWithDisplayScale:(double)a0 isRTL:(BOOL)a1 isAscending:(BOOL)a2 imageSize:(double)a3 imageOffset:(double)a4 backgroundColor:(id)a5 borderColor:(id)a6 borderWidth:(double)a7;

@end
