@interface TSDSystemTextInputResponder : TSDTextInputResponder <UITextAutoscrolling>

- (void)scrollSelectionToVisible:(BOOL)a0;
- (void)startAutoscroll:(struct CGPoint { double x0; double x1; })a0;
- (void)cancelAutoscroll;
- (void)copy:(id)a0;

@end
