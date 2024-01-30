@interface PLUIEditImageViewController : PLUIImageViewController {
    int _saveOptions;
}

@property (nonatomic) id delegate;
@property (nonatomic) int mode;

- (id)photo;
- (unsigned short)imageFormat;
- (void)dealloc;
- (void)cropOverlayWasOKed:(id)a0;
- (int)cropOverlayMode;
- (id)initWithPhoto:(id)a0;
- (int)saveOptions;
- (void)cropOverlay:(id)a0 didFinishSaving:(id)a1;
- (void)cropOverlayWasCancelled:(id)a0;
- (void)setImageSavingOptions:(int)a0;
- (unsigned long long)_contentAutoresizingMask;
- (unsigned long long)_tileAutoresizingMask;
- (id)imageTile;

@end
