@class NSURL;
@protocol DOCNode;

@interface DOCThumbnailFittingImageView : DOCBorderedFittingImageView

@property (readonly, nonatomic) id<DOCNode> node;
@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) long long generatorGeneration;

- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateThumbnail;
- (void)_commonInitWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 node:(id)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 url:(id)a1;
- (void)updateThumbnailForNode:(id)a0;
- (void)updateThumbnailForURL:(id)a0;

@end
