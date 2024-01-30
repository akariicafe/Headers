@class NSSet, NSMutableDictionary, PXStoryVisualDiagnosticsTable;

@interface _PXStoryVisualDiagnosticsTableRow : NSObject <PXStoryVisualDiagnosticsTableRowConfiguration> {
    NSSet *_availableColumnIdentifiers;
}

@property (readonly, weak, nonatomic) PXStoryVisualDiagnosticsTable *table;
@property (readonly, nonatomic) NSMutableDictionary *cellsByColumnIdentifier;
@property (nonatomic) double height;

- (void).cxx_destruct;
- (id)initWithTable:(id)a0 availableColumnIdentifiers:(id)a1;
- (void)addCellForColumnWithIdentifier:(id)a0 text:(id)a1;
- (void)addCellForColumnWithIdentifier:(id)a0 format:(id)a1;
- (void)addCellForColumnWithIdentifier:(id)a0 rendering:(id /* block */)a1;

@end
