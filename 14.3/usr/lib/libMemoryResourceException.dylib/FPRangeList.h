@interface FPRangeList : NSObject {
    struct FPRangeListNode { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct FPRangeListNode *x7; } *_rangeListHead;
}

- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; })sum;
- (void)dealloc;
- (void)_addRangeList:(id)a0 pageSize:(unsigned long long)a1;
- (void)addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 pageSize:(unsigned long long)a1 memoryTotal:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a2;
- (void)addRegion:(id)a0 pageSize:(unsigned long long)a1;

@end
