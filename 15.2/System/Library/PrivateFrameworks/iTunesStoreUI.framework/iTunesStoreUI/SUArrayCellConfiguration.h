@interface SUArrayCellConfiguration : SUCellConfiguration {
    unsigned long long _numberOfStrings;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_stringFrames;
    id *_strings;
    unsigned long long _numberOfImages;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_imageFrames;
    id *_images;
    id *_selectedImages;
}

- (void)reloadData;
- (unsigned long long)numberOfImages;
- (void)setLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (unsigned long long)numberOfLabels;
- (id)stringForLabelAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLabelAtIndex:(unsigned long long)a0;
- (id)imageAtIndex:(unsigned long long)a0 withModifiers:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForImageAtIndex:(unsigned long long)a0;
- (void)reloadImages;
- (void)reloadStrings;
- (void)reloadLayoutInformation;
- (id)initWithStringCount:(unsigned long long)a0 imageCount:(unsigned long long)a1;
- (id)_accessibilityStringsArrayPointer;

@end
