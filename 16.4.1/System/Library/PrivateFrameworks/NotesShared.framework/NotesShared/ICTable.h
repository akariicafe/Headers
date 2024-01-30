@class NSMutableDictionary, ICTableCellChangeNotifier, CRTTCompatibleDocument, NSObject;
@protocol ICTableDelegate;

@interface ICTable : CRTable

@property (weak, nonatomic) NSObject<ICTableDelegate> *delegate;
@property (readonly, nonatomic) NSMutableDictionary *columnTextStorages;
@property (readonly, nonatomic) CRTTCompatibleDocument *ttDocument;
@property (readonly, nonatomic) ICTableCellChangeNotifier *cellChangeNotifier;

+ (void)registerWithCRCoder;

- (void).cxx_destruct;
- (id)mergeableStringForColumnID:(id)a0 rowID:(id)a1;
- (void)setAttributedString:(id)a0 columnIndex:(unsigned long long)a1 rowIndex:(unsigned long long)a2;
- (id)stringForColumnID:(id)a0 rowID:(id)a1;
- (void)undoablyRemoveContentsOfColumn:(id)a0;
- (BOOL)columnIsEmptyAtIndex:(unsigned long long)a0;
- (id)copyIntoNewDocumentWithReplicaID:(id)a0;
- (id)defaultContentAtColumn:(id)a0 row:(id)a1;
- (BOOL)isEmptyAtColumnIdentifiers:(id)a0 rowIdentifiers:(id)a1;
- (BOOL)isEmptyAtColumnIndexes:(id)a0 rowIndexes:(id)a1;
- (BOOL)rowIsEmptyAtIndex:(unsigned long long)a0;
- (id)stringForColumnIndex:(unsigned long long)a0 rowIndex:(unsigned long long)a1;
- (id)subtableWithDocument:(id)a0 forSelectionContainingColumnIndices:(id)a1 rowIndices:(id)a2;
- (void)undoablyInsertContents:(id)a0 atColumn:(id)a1;

@end
