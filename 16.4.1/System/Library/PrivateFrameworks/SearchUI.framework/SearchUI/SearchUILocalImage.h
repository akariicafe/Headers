@interface SearchUILocalImage : SearchUIImage

@property (nonatomic) int imageType;

- (BOOL)isEqual:(id)a0;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (id)initWithSFImage:(id)a0;

@end
