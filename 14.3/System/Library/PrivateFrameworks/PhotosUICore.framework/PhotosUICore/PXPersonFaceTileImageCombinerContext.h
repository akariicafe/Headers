@class UIColor;

@interface PXPersonFaceTileImageCombinerContext : NSObject

@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) BOOL isLTR;
@property (readonly, nonatomic) double imageSize;
@property (readonly, nonatomic) double imageOffset;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) double borderWidth;

- (void).cxx_destruct;
- (id)initWithDisplayScale:(double)a0 isLTR:(BOOL)a1 imageSize:(double)a2 imageOffset:(double)a3 backgroundColor:(id)a4 borderColor:(id)a5 borderWidth:(double)a6;

@end
