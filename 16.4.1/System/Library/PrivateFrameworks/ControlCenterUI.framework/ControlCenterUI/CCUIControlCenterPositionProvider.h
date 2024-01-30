@class NSArray, NSDictionary;

@interface CCUIControlCenterPositionProvider : NSObject {
    NSArray *_packingRules;
    NSDictionary *_rectByIdentifier;
}

@property (readonly, nonatomic) struct CCUILayoutSize { unsigned long long width; unsigned long long height; } layoutSize;
@property (readonly, nonatomic) struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; } maximumLayoutSize;

- (id)initWithPackingRules:(id)a0;
- (id)_generateRectByIdentifierWithOrderedIdentifiers:(id)a0 orderedSizes:(id)a1 packingOrder:(unsigned long long)a2 startPosition:(struct CCUILayoutPoint { unsigned long long x0; unsigned long long x1; })a3 maximumSize:(struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })a4 outputLayoutSize:(out struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; } *)a5;
- (struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; })maximumLayoutSize;
- (struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x0; unsigned long long x1; } x0; struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; } x1; })layoutRectForIdentifier:(id)a0;
- (void)regenerateRectsWithOrderedIdentifiers:(id)a0 orderedSizes:(id)a1;
- (void).cxx_destruct;

@end
