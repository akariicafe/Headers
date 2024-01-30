@class NSSet;

@interface PencilEducationElementTextField : UITextField

@property (nonatomic) BOOL ignoreScribbleInsertText;
@property (retain, nonatomic) NSSet *allowedCalloutActions;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertText:(id)a0 alternatives:(id)a1 style:(long long)a2;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (long long)_textInputSource;

@end
