@interface TSDPathManipulation : NSObject {
    TSDPathManipulation *mPrecedingManipulation;
}

- (void)dealloc;
- (struct CGPath { } *)manipulatePath:(struct CGPath { } *)a0 withLineWidth:(double)a1;
- (BOOL)canDecomposeRectIntoParts;
- (id)initWithProperties:(id)a0 bundle:(id)a1 dataManager:(void *)a2 precedingManipulation:(id)a3;

@end
