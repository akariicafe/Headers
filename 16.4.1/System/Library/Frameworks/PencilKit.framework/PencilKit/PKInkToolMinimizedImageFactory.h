@interface PKInkToolMinimizedImageFactory : NSObject

+ (id)_baseNameForInkIdentifier:(id)a0 imageType:(id)a1;
+ (id)_iPadImageForEraserWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)_iPadImageForToolWithInk:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
+ (id)_imageForInk:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 inkPickerSizeState:(unsigned long long)a3;
+ (id)_imageNameWithBaseName:(id)a0 sizeState:(unsigned long long)a1;
+ (id)_maskImageForSizeState:(unsigned long long)a0;
+ (id)_minimizedToolImageForInk:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 sizeState:(unsigned long long)a3;
+ (id)_ringImageForSizeState:(unsigned long long)a0;
+ (id)imageForInk:(id)a0 sizeState:(unsigned long long)a1;

@end
