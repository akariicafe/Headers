@class NSMutableArray;

@interface OADFlattenedGroup : OADDrawable {
    NSMutableArray *mDrawables;
}

- (id)init;
- (void).cxx_destruct;
- (id)drawables;
- (void)addDrawable:(id)a0;

@end
