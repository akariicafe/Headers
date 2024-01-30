@class NSMutableArray;

@interface TPDrawablesZOrder : TSPObject {
    NSMutableArray *_drawables;
}

@property (readonly, nonatomic) unsigned long long drawableCount;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)removeDrawable:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)moveDrawables:(id)a0 toIndexes:(id)a1;
- (unsigned long long)addDrawable:(id)a0;
- (id)drawableEnumerator;
- (id)drawableAtZOrder:(unsigned long long)a0;
- (unsigned long long)insertDrawable:(id)a0 atZOrder:(unsigned long long)a1;
- (void)moveDrawable:(id)a0 toZOrder:(unsigned long long)a1;
- (void)moveDrawableAtZOrder:(unsigned long long)a0 toZOrder:(unsigned long long)a1;
- (void)moveDrawables:(id)a0 toZOrder:(unsigned long long)a1;
- (id)orderedDrawables:(id)a0;
- (void)removeDrawableAtZOrder:(unsigned long long)a0;
- (void)swapDrawableAtZOrder:(unsigned long long)a0 withDrawableAtZOrder:(unsigned long long)a1;
- (unsigned long long)zOrderOfDrawable:(id)a0;

@end
