@class _PXVisualDiagnosticsTableRow, NSArray, NSDictionary, NSString, NSMutableDictionary, NSMutableArray, PXVisualDiagnosticsContext;

@interface PXVisualDiagnosticsTable : NSObject <PXVisualDiagnosticsTableColumnsConfiguration, PXVisualDiagnosticsTableRowsConfiguration, PXVisualDiagnosticsTableConfiguration> {
    NSMutableDictionary *_mutableColumns;
    NSMutableArray *_mutableColumnIdentifiers;
    PXVisualDiagnosticsContext *_context;
    _PXVisualDiagnosticsTableRow *_headerRow;
    long long _pageIndex;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _nextRowAvailableFrame;
}

@property (readonly, nonatomic) NSArray *columnIdentifiers;
@property (readonly, nonatomic) NSDictionary *columns;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double defaultRowHeight;
@property (nonatomic) double defaultRowFontSize;

- (id)init;
- (void).cxx_destruct;
- (void)_insertPageBreak;
- (void)_renderRow:(id)a0;
- (void)_renderTitleIfNeeded;
- (void)addColumnWithIdentifier:(id)a0 configuration:(id /* block */)a1;
- (void)addRowWithConfiguration:(id /* block */)a0;
- (void)configureColumnsWithConfiguration:(id /* block */)a0;
- (void)renderInContext:(id)a0 withRowsConfiguration:(id /* block */)a1;

@end
