@class PDFSelection;

@interface SelectionRectInfo : NSObject {
    PDFSelection *selection;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
}

- (void).cxx_destruct;

@end
