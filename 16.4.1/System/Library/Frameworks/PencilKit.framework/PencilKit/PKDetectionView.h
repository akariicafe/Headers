@class UIContextMenuInteraction, NSString, PKDetectionItem;

@interface PKDetectionView : UIView <UIContextMenuInteractionDelegate_ForWebKitOnly>

@property (retain, nonatomic) UIContextMenuInteraction *menuInteraction;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } drawingBounds;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } drawingTransform;
@property (readonly, nonatomic) PKDetectionItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)init;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)accessibilityTraits;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (void).cxx_destruct;
- (id)_underlineColor;
- (double)_underlineThickness;
- (void)tapHandler:(id)a0;

@end
