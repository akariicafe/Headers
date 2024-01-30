@interface TSCECellRecordTileWrapper : TSPObject {
    unsigned short _tileColumnBegin;
    unsigned int _tileRowBegin;
    void *_tile;
    void *_unarchivedCellRecords;
}

@property (readonly, nonatomic) unsigned long long numCellRecords;
@property (nonatomic) unsigned short internalOwnerID;

- (void)dealloc;
- (id)description;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void *)cppTile;
- (id)initWithOwnerId:(unsigned short)a0 tileColumnBegin:(unsigned short)a1 tileRowBegin:(unsigned int)a2 context:(id)a3;
- (void)unpackAfterUnarchiveForCellDependencies:(void *)a0;

@end
