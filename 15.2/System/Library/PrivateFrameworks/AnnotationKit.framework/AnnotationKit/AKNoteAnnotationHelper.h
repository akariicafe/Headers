@interface AKNoteAnnotationHelper : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForClosedPopupAnnotation:(id)a0 havingParent:(id)a1 onPageController:(id)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundsForOpenPopupAnnotation:(id)a0 withClosedBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 havingParent:(id)a2 onPageController:(id)a3;
+ (id)newPopupAnnotationWithParent:(id)a0 onPageController:(id)a1;

@end
