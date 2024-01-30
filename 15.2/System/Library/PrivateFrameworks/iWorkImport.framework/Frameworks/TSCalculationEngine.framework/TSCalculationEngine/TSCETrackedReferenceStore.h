@class NSLock, TSUSparseArray;

@interface TSCETrackedReferenceStore : TSPObject {
    NSLock *_trackedRefsLock;
    TSUSparseArray *_trackedReferences;
    unsigned long long _nextEmptyTrackedReferencesIndex;
}

@property (nonatomic) struct TSKUIDStruct { unsigned long long _lower; unsigned long long _upper; } ownerUID;

+ (struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })coordFromIndex:(unsigned long long)a0;
+ (unsigned long long)indexFromCoord:(const struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } *)a0;

- (void)willClose;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)allTrackedReferences;
- (void)beginTrackingReference:(id)a0 calcEngine:(id)a1;
- (void)endTrackingReference:(id)a0 calcEngine:(id)a1;
- (id)trackedReferenceAtCoord:(struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; })a0;
- (id)beginTrackingReferenceWithCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0 calcEngine:(id)a1;
- (id)beginTrackingReferenceWithSpanningRef:(const struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } x0; unsigned char x1; } *)a0 calcEngine:(id)a1;

@end
