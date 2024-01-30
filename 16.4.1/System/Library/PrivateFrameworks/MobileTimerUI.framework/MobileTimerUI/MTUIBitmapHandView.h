@class NSArray;

@interface MTUIBitmapHandView : UIView {
    NSArray *_partViews;
    NSArray *_partViewsMaintainingOrientation;
}

+ (id)partInfoWithName:(id)a0;
+ (id)partInfoWithName:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1 maintainsOrientation:(BOOL)a2;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 rotationalCenter:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithBundle:(id)a0 resourcePath:(id)a1 partInfoList:(id)a2 rotationalCenter:(struct CGPoint { double x0; double x1; })a3;

@end
