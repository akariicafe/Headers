@class SearchUIImage;

@interface SearchUITLKImage : TLKImage

@property (retain) SearchUIImage *searchUIImage;

- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (double)aspectRatio;
- (id)initWithSearchUIImage:(id)a0;

@end
