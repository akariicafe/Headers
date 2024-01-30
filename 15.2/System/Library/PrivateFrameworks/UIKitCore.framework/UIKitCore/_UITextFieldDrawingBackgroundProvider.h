@interface _UITextFieldDrawingBackgroundProvider : _UITextFieldBackgroundProvider {
    struct { unsigned char drawsContentBasedOnTraits : 1; } _flags;
}

@property (nonatomic) BOOL drawsContent;

- (void)removeFromTextField;
- (void)addToTextField:(id)a0;
- (void)_setDrawsContent:(BOOL)a0;
- (void)setDrawsContentBasedOnTraitsIfNeeded;
- (void)_buildDescription:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)drawInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsDisplay;

@end
