@class AKPageController;

@interface _AKInkOverlayDrawingUndoTarget : NSObject

@property (weak) AKPageController *pageController;

- (id)initWithPageController:(id)a0;
- (void).cxx_destruct;
- (void)performUndo:(id)a0;

@end
