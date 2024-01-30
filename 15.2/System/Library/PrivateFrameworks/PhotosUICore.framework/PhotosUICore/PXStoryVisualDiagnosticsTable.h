@class _PXStoryVisualDiagnosticsTableRow, NSArray, NSDictionary, NSString, NSMutableDictionary, NSMutableArray, PXStoryVisualDiagnosticsContext;

@interface PXStoryVisualDiagnosticsTable : NSObject <PXStoryVisualDiagnosticsTableColumnsConfiguration, PXStoryVisualDiagnosticsTableRowsConfiguration, PXStoryVisualDiagnosticsTableConfiguration> {
    NSMutableDictionary *_mutableColumns;
    NSMutableArray *_mutableColumnIdentifiers;
    PXStoryVisualDiagnosticsContext *_context;
    _PXStoryVisualDiagnosticsTableRow *_headerRow;
    long long _pageIndex;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _nextRowAvailableFrame;
}

@property (readonly, nonatomic) NSArray *columnIdentifiers;
@property (readonly, nonatomic) NSDictionary *columns;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double defaultRowHeight;
@property (nonatomic) double defaultRowFontSize;

- (void).cxx_destruct;
- (id)init;
- (void)addRowWithConfiguration:(id /* block */)a0;
- (void)addColumnWithIdentifier:(id)a0 configuration:(id /* block */)a1;
- (void)configureColumnsWithConfiguration:(id /* block */)a0;
- (void)renderInContext:(id)a0 withRowsConfiguration:(id /* block */)a1;
- (void)_insertPageBreak;
- (void)_renderTitleIfNeeded;
- (void)_renderRow:(id)a0;

@end
