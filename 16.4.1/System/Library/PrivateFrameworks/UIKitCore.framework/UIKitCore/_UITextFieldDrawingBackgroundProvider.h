@interface _UITextFieldDrawingBackgroundProvider : _UITextFieldBackgroundProvider {
    struct { unsigned char drawsContentBasedOnTraits : 1; } _flags;
}

@property (nonatomic) BOOL drawsContent;

- (void)_buildDescription:(id)a0;
- (void)removeFromTextField;
- (void)addToTextField:(id)a0;
- (void)setNeedsDisplay;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)_setDrawsContent:(BOOL)a0;
- (void)drawInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDrawsContentBasedOnTraitsIfNeeded;

@end
