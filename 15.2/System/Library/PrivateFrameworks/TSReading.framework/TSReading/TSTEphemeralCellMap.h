@class NSString;

@interface TSTEphemeralCellMap : NSObject <TSTCellMap> {
    struct { unsigned short x0; unsigned char x1; unsigned char x2; } *mCellIDs;
    id *mCells;
    unsigned long long mCapacity;
    unsigned long long mCount;
    BOOL mMayModifyValuesReferencedByFormulas;
    BOOL mIgnoreHiddenCellsWhenApplying;
}

@property (nonatomic) BOOL appliesToHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)cellAtIndex:(unsigned long long)a0;
- (void)addCell:(id)a0 andCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a1;
- (BOOL)containsCellID:(struct { unsigned short x0; unsigned char x1; unsigned char x2; })a0;
- (void)popLastCell;
- (struct { unsigned short x0; unsigned char x1; unsigned char x2; } *)cellIDs;
- (struct { unsigned short x0; unsigned char x1; unsigned char x2; })cellIDAtIndex:(unsigned long long)a0;
- (BOOL)mayModifyFormulasInCells;
- (BOOL)mayModifyValuesReferencedByFormulas;
- (void)setMayModifyValuesReferencedByFormulas:(BOOL)a0;

@end
