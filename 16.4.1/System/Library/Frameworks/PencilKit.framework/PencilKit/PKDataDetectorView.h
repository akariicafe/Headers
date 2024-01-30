@class PKDataDetectorItem, NSArray, NSDictionary;

@interface PKDataDetectorView : PKDetectionView

@property (retain, nonatomic) PKDataDetectorItem *dataDetectorItem;
@property (copy, nonatomic) NSArray *allItems;
@property (retain, nonatomic) NSDictionary *dataDetectorContext;

- (id)accessibilityIdentifier;
- (id)item;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)_highlightWithCompletion:(id /* block */)a0;
- (double)_underlineThickness;
- (id)initWithDataDetectorItem:(id)a0 allItems:(id)a1;
- (void)tapHandler:(id)a0;

@end
