@class NSPredicate, GKBrush;

@interface GKConditionBrush : GKBrush

@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) GKBrush *yesBrush;
@property (retain, nonatomic) GKBrush *noBrush;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })sizeForInput:(id)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withContext:(struct CGContext { } *)a1 input:(id)a2;

@end
