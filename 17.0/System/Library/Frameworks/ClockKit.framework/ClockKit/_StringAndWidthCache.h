@class NSMutableArray;

@interface _StringAndWidthCache : NSObject {
    NSMutableArray *_attributedStrings;
    NSMutableArray *_boxedSizes;
}

- (id)init;
- (void).cxx_destruct;
- (void)addAttributedString:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)attributedStringAndSize:(struct CGSize { double x0; double x1; } *)a0 forMaxWidth:(double)a1;
- (unsigned long long)attributedStringCount;
- (id)attributedStringForIndex:(unsigned long long)a0;
- (id)smallestAttributedStringAndSize:(struct CGSize { double x0; double x1; } *)a0;

@end
