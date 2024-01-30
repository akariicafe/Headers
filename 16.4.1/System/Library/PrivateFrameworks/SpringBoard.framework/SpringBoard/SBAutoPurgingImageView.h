@interface SBAutoPurgingImageView : UIImageView {
    id /* block */ _block;
}

- (void)didMoveToWindow;
- (void)setImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithImageGenerationBlock:(id /* block */)a0;

@end
