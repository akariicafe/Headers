@class NSMutableDictionary;

@interface SUControlAppearance : NSObject <NSCopying> {
    NSMutableDictionary *_images;
    NSMutableDictionary *_textAttributes;
    NSMutableDictionary *_titlePositions;
}

@property (readonly, nonatomic) long long numberOfImages;

- (id)textAttributesForState:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })a0 forBarMetrics:(long long)a1;
- (struct UIOffset { double x0; double x1; })titlePositionAdjustmentForBarMetrics:(long long)a0;
- (void)enumerateImagesUsingBlock:(id /* block */)a0;
- (void)styleBarButtonItem:(id)a0;
- (id)_copyKeyForState:(unsigned long long)a0 barMetrics:(long long)a1;
- (void)enumerateTextAttributesUsingBlock:(id /* block */)a0;
- (void)enumerateTitlePositionsUsingBlock:(id /* block */)a0;
- (id)imageForState:(unsigned long long)a0 barMetrics:(long long)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1 barMetrics:(long long)a2;
- (void)styleButton:(id)a0;

@end
