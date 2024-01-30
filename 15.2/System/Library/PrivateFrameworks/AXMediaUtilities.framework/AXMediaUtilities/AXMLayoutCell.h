@class AXMVisionFeature;

@interface AXMLayoutCell : AXMLayoutItem {
    AXMVisionFeature *_feature;
}

+ (id)sequence:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void).cxx_destruct;
- (id)feature;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
