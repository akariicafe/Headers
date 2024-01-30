@interface TSCETransaction : NSObject {
    void *_cellRefsToCheck;
    struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } _skipRepairBadRefsOwnerUID;
}

- (void)dealloc;
- (id)description;
- (const void *)cellRefsToCheck;
- (void)addCellRefToCheck:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0;
- (id)initWithCalcEngine:(id)a0;
- (BOOL)isSkippingRepairBadRefsForOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)skipRepairBadRefsForOwnerUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0;

@end
