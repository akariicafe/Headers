@interface SearchUILocalImage : SearchUIImage

@property (nonatomic) int imageType;

- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithSFImage:(id)a0;

@end
