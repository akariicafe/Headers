@class PDSlide;

@interface PMSlideMapper : CMMapper {
    PDSlide *mSlide;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mRect;
}

- (void).cxx_destruct;
- (id)defaultTheme;
- (id)styleMatrix;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapDrawablesAt:(id)a0 withState:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slideRect;
- (id)initWithPDSlide:(id)a0 slideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 parent:(id)a2;
- (void)mapMasterSlideAt:(id)a0 withState:(id)a1;
- (id)slideName;
- (void)mapBackgroundAt:(id)a0 recursive:(BOOL)a1 withState:(id)a2;

@end
