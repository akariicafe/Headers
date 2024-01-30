@class ICTableCellChangeNotifier, NSMutableDictionary, CRTTCompatibleDocument;

@interface ICTable : CRTable

@property (retain, nonatomic) NSMutableDictionary *columnTextStorages;
@property (readonly, nonatomic) CRTTCompatibleDocument *ttDocument;
@property (readonly, nonatomic) ICTableCellChangeNotifier *cellChangeNotifier;

+ (void)registerWithCRCoder;

- (void)setAttributedString:(id)a0 columnIndex:(unsigned long long)a1 rowIndex:(unsigned long long)a2;
- (id)stringForColumnIndex:(unsigned long long)a0 rowIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEmptyAtColumnIndexes:(id)a0 rowIndexes:(id)a1;
- (id)subtableWithDocument:(id)a0 forSelectionContainingColumnIndices:(id)a1 rowIndices:(id)a2;
- (id)stringForColumnID:(id)a0 rowID:(id)a1;
- (id)mergeableStringForColumnID:(id)a0 rowID:(id)a1;
- (id)joinedAttributedStringForColumns:(id)a0 rows:(id)a1;
- (BOOL)columnIsEmptyAtIndex:(unsigned long long)a0;
- (BOOL)rowIsEmptyAtIndex:(unsigned long long)a0;
- (BOOL)isEmptyAtColumnIdentifiers:(id)a0 rowIdentifiers:(id)a1;
- (id)copyIntoNewDocumentWithReplicaID:(id)a0;

@end
