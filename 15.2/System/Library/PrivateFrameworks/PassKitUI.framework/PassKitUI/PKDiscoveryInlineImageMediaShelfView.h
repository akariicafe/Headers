@interface PKDiscoveryInlineImageMediaShelfView : PKDiscoveryInlineCaptionedMediaShelfView

- (void)setImage:(id)a0 animated:(BOOL)a1;
- (id)initWithShelf:(id)a0;
- (void)_loadImageFromBundle;
- (void)_loadImageFromFileURL;
- (id)imageMediaView;

@end
