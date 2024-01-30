@interface STHourglassView : STCAPackageView

- (void)setStateName:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)prepareForInterfaceBuilder;
- (void)animateToStateName:(id)a0 completionHandler:(id /* block */)a1;
- (id)makeCAPackage;

@end
