@class NSURL;

@interface FCCoverArtImage : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } dimensions;
@property (readonly, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithDimensions:(struct CGSize { double x0; double x1; })a0 URL:(id)a1;

@end
