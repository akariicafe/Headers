@class UIImage, QLItem;
@protocol QLItemThumbnailGeneratorProtocol;

@interface QLItemThumbnailGenerationOperation : QLAsynchronousOperation

@property (retain, nonatomic) id<QLItemThumbnailGeneratorProtocol> generator;
@property (retain, nonatomic) QLItem *item;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIImage *thumbnail;

- (void).cxx_destruct;
- (void)main;
- (id)initWithThumbnailGenerator:(id)a0 item:(id)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;

@end
