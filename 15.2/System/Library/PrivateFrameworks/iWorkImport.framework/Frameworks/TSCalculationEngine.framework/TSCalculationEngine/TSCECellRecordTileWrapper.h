@interface TSCECellRecordTileWrapper : TSPObject {
    unsigned short _tileColumnBegin;
    unsigned int _tileRowBegin;
    struct TSCECellRecordTile { unsigned short x0; unsigned int x1; struct TSCECellRecord *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; id x6; } *_tile;
    void *_unarchivedCellRecords;
}

@property (readonly, nonatomic) unsigned long long numCellRecords;
@property (nonatomic) unsigned short internalOwnerID;

- (id)description;
- (void)dealloc;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithOwnerId:(unsigned short)a0 tileColumnBegin:(unsigned short)a1 tileRowBegin:(unsigned int)a2 context:(id)a3;
- (struct TSCECellRecordTile { unsigned short x0; unsigned int x1; struct TSCECellRecord *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; id x6; } *)cppTile;
- (void)unpackAfterUnarchiveForCellDependencies:(void *)a0;

@end
