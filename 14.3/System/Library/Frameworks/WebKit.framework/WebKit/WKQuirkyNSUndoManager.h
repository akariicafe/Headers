@class WKContentView;

@interface WKQuirkyNSUndoManager : NSUndoManager

@property (readonly, weak) WKContentView *contentView;

- (id)initWithContentView:(id)a0;
- (BOOL)canUndo;
- (void)redo;
- (BOOL)canRedo;
- (void)undo;
- (void).cxx_destruct;

@end
