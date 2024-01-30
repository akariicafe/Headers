@class WKContentView;

@interface WKQuirkyNSUndoManager : NSUndoManager

@property (readonly, weak) WKContentView *contentView;

- (BOOL)canUndo;
- (BOOL)canRedo;
- (id)initWithContentView:(id)a0;
- (void).cxx_destruct;
- (void)undo;
- (void)redo;

@end
