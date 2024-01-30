@class NSMutableArray;

@interface OADFlattenedGroup : OADDrawable {
    NSMutableArray *mDrawables;
}

- (void).cxx_destruct;
- (id)init;
- (id)drawables;
- (void)addDrawable:(id)a0;

@end
