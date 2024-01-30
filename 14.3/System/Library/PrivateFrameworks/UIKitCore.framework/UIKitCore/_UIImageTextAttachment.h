@class UIImage;

@interface _UIImageTextAttachment : NSTextAttachment {
    UIImage *_image;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct { unsigned char explicitBounds : 1; } _flags;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_initWithImage:(id)a0;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (id)_deriveAttribute:(id)a0 inStorage:(id)a1 atIndex:(long long)a2;
- (id)_imageAdaptedForTextAtIndex:(long long)a0 inContainer:(id)a1 sizeOnly:(BOOL)a2;
- (void)setImage:(id)a0;

@end
