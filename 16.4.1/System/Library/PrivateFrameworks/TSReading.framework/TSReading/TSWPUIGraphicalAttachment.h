@interface TSWPUIGraphicalAttachment : TSWPAttachment

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double baselineOffset;

- (int)elementKind;
- (void)invalidate;
- (id)rendererForAttachment;
- (BOOL)wantsSelectionAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
