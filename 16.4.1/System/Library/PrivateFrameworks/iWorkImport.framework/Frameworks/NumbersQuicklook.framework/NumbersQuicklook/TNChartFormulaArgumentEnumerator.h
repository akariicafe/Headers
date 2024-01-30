@class NSEnumerator;

@interface TNChartFormulaArgumentEnumerator : NSObject <NSFastEnumeration> {
    NSEnumerator *_underlyingEnumerator;
}

- (id)nextObject;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithEnumerator:(id)a0;
- (void).cxx_destruct;
- (id)nextElement;

@end
