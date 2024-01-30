@interface TSTTableTileRowInfo : TSPContainedObject {
    struct __CFData { } *mStorageBuffer;
    unsigned short mStorageOffsets[255];
    unsigned short mBufferSize;
    unsigned char mMaxTileColumnIndex;
    BOOL mMaxTileColumnIndexValid;
    unsigned char mStorageVersion;
}

@property (nonatomic) unsigned short tileRowIndex;
@property (readonly, nonatomic) unsigned short cellCount;

- (void)debugDump;
- (void)dealloc;
- (void)validate;
- (id)description;
- (void)i_upgradeWithDataStore:(id)a0;
- (id)initWithOwner:(id)a0 tileRowIndex:(unsigned short)a1;
- (id)p_debugDumpCompact;

@end
