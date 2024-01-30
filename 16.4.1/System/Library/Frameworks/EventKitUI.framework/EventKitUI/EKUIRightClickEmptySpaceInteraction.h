@class UIContextMenuInteraction, NSString, UIView;
@protocol EKUIRightClickEmptySpaceInteractionDelegate;

@interface EKUIRightClickEmptySpaceInteraction : NSObject <UIContextMenuInteractionDelegate, UIInteraction>

@property (retain, nonatomic) UIContextMenuInteraction *interaction;
@property (weak, nonatomic) id<EKUIRightClickEmptySpaceInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

+ (id)localizedPasteStringForEventCount:(unsigned long long)a0 includeHere:(BOOL)a1;

- (void)willMoveToView:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)didMoveToView:(id)a0;

@end
