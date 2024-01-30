@interface PaperKit.ShapeEditingControl : UIView <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ controlHeight;
    void /* unknown type, empty encoding */ controlWidth;
    void /* unknown type, empty encoding */ smallerControlWidth;
    void /* unknown type, empty encoding */ nonDynamicButtonBackgroundColor;
}

@property (nonatomic) BOOL userInteractionEnabled;

- (BOOL)isUserInteractionEnabled;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
