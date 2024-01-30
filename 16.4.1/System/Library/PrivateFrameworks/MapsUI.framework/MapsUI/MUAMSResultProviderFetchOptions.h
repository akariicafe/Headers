@interface MUAMSResultProviderFetchOptions : NSObject

@property (nonatomic) double displayScale;
@property (nonatomic) struct CGSize { double width; double height; } artworkSize;
@property (nonatomic) long long source;

- (id)initWithDisplayScale:(double)a0 artworkSize:(struct CGSize { double x0; double x1; })a1 source:(long long)a2;

@end
