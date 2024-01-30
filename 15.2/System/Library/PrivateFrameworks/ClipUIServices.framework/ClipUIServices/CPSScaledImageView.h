@class NSString;

@interface CPSScaledImageView : UIImageView {
    struct CGSize { double width; double height; } _scaledImageSize;
    BOOL _needsUpdateScaledImageSize;
}

@property (retain, nonatomic) NSString *textStyleForScaling;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
