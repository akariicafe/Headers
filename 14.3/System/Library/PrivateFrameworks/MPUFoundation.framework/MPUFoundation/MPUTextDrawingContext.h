@class NSString, NSDictionary, UIImage, NSAttributedString, NSStringDrawingContext;

@interface MPUTextDrawingContext : NSObject

@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (copy, nonatomic, setter=_setAttributedText:) NSAttributedString *attributedText;
@property (retain, nonatomic, setter=_setStringDrawingContext:) NSStringDrawingContext *stringDrawingContext;
@property (nonatomic, setter=_setStringDrawingOptions:) long long stringDrawingOptions;
@property (copy, nonatomic, setter=_setUniformTextAttributes:) NSDictionary *uniformTextAttributes;
@property (retain, nonatomic, getter=_image, setter=_setImage:) UIImage *image;
@property (nonatomic, setter=_setBoundingSize:) struct CGSize { double width; double height; } boundingSize;
@property (nonatomic, setter=_setFirstBaselineOffsetFromTop:) double firstBaselineOffsetFromTop;
@property (nonatomic, setter=_setLastBaselineOffsetFromBottom:) double lastBaselineOffsetFromBottom;

- (void).cxx_destruct;

@end
