@interface UIInputViewSetPlacementPlaceholderUndocked : UIInputViewSetPlacementUndocked {
    double _height;
}

+ (id)placementWithHeight:(double)a0 undockedOffset:(struct CGPoint { double x0; double x1; })a1 chromeBuffer:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;

- (BOOL)isEqual:(id)a0;
- (double)heightOfInputViews:(id)a0;

@end
