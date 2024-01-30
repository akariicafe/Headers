@class NSArray, UIContextMenuInteraction, NSDictionary, PKDataDetectorItem, NSString;

@interface PKDataDetectorView : UIView <UIContextMenuInteractionDelegate_ForWebKitOnly>

@property (copy, nonatomic) NSArray *allItems;
@property (retain, nonatomic) UIContextMenuInteraction *menuInteraction;
@property (retain, nonatomic) NSDictionary *dataDetectorContext;
@property (readonly, nonatomic) PKDataDetectorItem *item;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } drawingBounds;
@property (nonatomic) double drawingScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)accessibilityTraits;
- (BOOL)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)accessibilityIdentifier;
- (id)accessibilityValue;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDataDetectorItem:(id)a0 allItems:(id)a1;
- (void)tapHandler:(id)a0;
- (void)_highlightWithCompletion:(id /* block */)a0;

@end
