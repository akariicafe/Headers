@interface SKUICommentImageDataConsumer : SKUIStyledImageDataConsumer

@property (copy) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)_scaledImageWithBounds:(struct CGSize { double x0; double x1; })a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 drawBlock:(id /* block */)a2;
- (id)imageForImage:(id)a0;

@end
