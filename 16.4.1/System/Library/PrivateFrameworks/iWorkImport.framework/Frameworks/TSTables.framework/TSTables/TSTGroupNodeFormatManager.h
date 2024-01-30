@class TSCECellValue, NSMutableDictionary;

@interface TSTGroupNodeFormatManager : NSObject {
    NSMutableDictionary *_rowLookupKeysForFormat;
    BOOL _noFormatMergingNeeded;
    NSMutableDictionary *_upgradeRowUidsForFormat;
}

@property (readonly, nonatomic) TSCECellValue *cellValue;

- (id)initWithArchive:(const void *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)reset;
- (void)unpackAfterUnarchiveForGroupBy:(id)a0;
- (void)encodeToArchive:(void *)a0 forGroupBy:(id)a1 backwardCompat:(BOOL)a2;
- (id)initWithCellValue:(id)a0;
- (BOOL)mergedFormatChangedByAddingRowUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 andCellValue:(id)a1 groupBy:(id)a2;
- (BOOL)mergedFormatChangedByRemovingRowUID:(const struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } *)a0 groupBy:(id)a1;
- (void)p_recalculateMergedFormatWithGroupBy:(id)a0;
- (void)updateWithDocumentRoot:(id)a0;

@end
