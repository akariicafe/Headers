@interface TSDInsertionContext : NSObject

@property (readonly, nonatomic) BOOL hasPreferredCenter;
@property (readonly, nonatomic, getter=isPreferredCenterRequired) BOOL preferredCenterRequired;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } preferredCenter;
@property (readonly, nonatomic) BOOL shouldEndEditing;
@property (readonly, nonatomic) BOOL insertFloating;
@property (readonly, nonatomic) BOOL insertFromDrag;
@property (readonly, nonatomic) BOOL fromDragToInsertController;
@property (readonly, nonatomic) BOOL insertWillBeDiscarded;
@property (readonly, nonatomic, getter=isInteractive) BOOL interactive;

+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint { double x0; double x1; })a0 required:(BOOL)a1 fromDragToInsertController:(BOOL)a2 insertWillBeDiscarded:(BOOL)a3;
+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint { double x0; double x1; })a0 required:(BOOL)a1 shouldEndEditing:(BOOL)a2 fromDragToInsertController:(BOOL)a3 insertWillBeDiscarded:(BOOL)a4;
+ (id)nonInteractiveFloatingInsertionContext;
+ (id)nonInteractiveInsertionContext;

- (id)init;

@end
