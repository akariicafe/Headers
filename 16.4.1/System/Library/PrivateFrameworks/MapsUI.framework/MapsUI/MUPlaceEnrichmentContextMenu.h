@class MUPlaceEnrichmentAction;
@protocol MUPlaceEnrichmentSectionContextMenuDelegate, MUPlaceEnrichmentActionHandler;

@interface MUPlaceEnrichmentContextMenu : UIControl

@property (retain, nonatomic) MUPlaceEnrichmentAction *contextMenuAction;
@property (weak, nonatomic) id<MUPlaceEnrichmentSectionContextMenuDelegate> contextMenuDelegate;
@property (weak, nonatomic) id<MUPlaceEnrichmentActionHandler> enrichmentActionDelegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
