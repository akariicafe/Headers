@class NSArray, NSMutableArray;

@interface TSTTableTile : TSPObject {
    unsigned char mMaxColumn;
    unsigned short mMaxRow;
    unsigned short mNumCells;
    NSMutableArray *mRowInfos;
    unsigned short mNumRows;
    unsigned char mStorageVersion;
}

@property (readonly, nonatomic) unsigned char maxColumn;
@property (readonly, nonatomic) unsigned short maxRow;
@property (readonly, nonatomic) unsigned short numCells;
@property (readonly, nonatomic) unsigned short numRows;
@property (readonly, nonatomic) NSArray *rowInfos;

- (id)initWithContext:(id)a0;
- (void)debugDump;
- (void)dealloc;
- (void)validate;
- (id)description;
- (id)packageLocator;
- (unsigned long long)flushableSize;
- (id)initWithRows:(id)a0 context:(id)a1;
- (void)debugListRows;
- (void)i_upgradeTileRowInfosWithDataStore:(id)a0;

@end
