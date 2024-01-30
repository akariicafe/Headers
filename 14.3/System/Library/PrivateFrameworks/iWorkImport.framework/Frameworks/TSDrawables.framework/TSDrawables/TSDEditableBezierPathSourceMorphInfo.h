@class TSDEditableBezierPathSource, TSUPointerKeyDictionary;

@interface TSDEditableBezierPathSourceMorphInfo : NSObject {
    TSUPointerKeyDictionary *mOriginalNodeIndexMapping;
}

@property (retain, nonatomic) TSDEditableBezierPathSource *original;
@property (retain, nonatomic) TSDEditableBezierPathSource *smoothOriginal;

- (void)dealloc;
- (id)initWithEditableBezierPathSource:(id)a0;
- (id)originalNodeForNode:(id)a0;
- (unsigned long long)originalSubpathIndexForNode:(id)a0;
- (unsigned long long)originalNodeIndexForNode:(id)a0;
- (id)originalSmoothNodeForNode:(id)a0;

@end
