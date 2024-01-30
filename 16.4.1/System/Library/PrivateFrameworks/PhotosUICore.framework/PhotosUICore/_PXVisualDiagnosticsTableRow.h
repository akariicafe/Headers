@class PXVisualDiagnosticsTable, NSMutableDictionary, NSSet;

@interface _PXVisualDiagnosticsTableRow : NSObject <PXVisualDiagnosticsTableRowConfiguration> {
    NSSet *_availableColumnIdentifiers;
}

@property (readonly, weak, nonatomic) PXVisualDiagnosticsTable *table;
@property (readonly, nonatomic) NSMutableDictionary *cellsByColumnIdentifier;
@property (nonatomic) double height;

- (void).cxx_destruct;
- (void)addCellForColumnWithIdentifier:(id)a0 format:(id)a1;
- (void)addCellForColumnWithIdentifier:(id)a0 rendering:(id /* block */)a1;
- (void)addCellForColumnWithIdentifier:(id)a0 text:(id)a1;
- (id)initWithTable:(id)a0 availableColumnIdentifiers:(id)a1;

@end
