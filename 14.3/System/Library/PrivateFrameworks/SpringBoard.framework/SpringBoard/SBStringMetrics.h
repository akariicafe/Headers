@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration> {
    NSMutableArray *_fragments;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)fragmentCount;
- (id)description;
- (id)fragments;
- (void)addFragment:(id)a0;

@end
