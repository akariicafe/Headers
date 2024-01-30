@class NSURL, FPItem;

@interface DOCThumbnailFittingImageView : DOCBorderedFittingImageView

@property (readonly, nonatomic) FPItem *item;
@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) long long generatorGeneration;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateThumbnail;
- (void)_commonInitWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateThumbnailForItem:(id)a0;
- (void)updateThumbnailForURL:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 item:(id)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 url:(id)a1;

@end
