@class NSNumber, NSAttributedString;

@interface CIAttributedTextImageGenerator : CIFilter

@property (retain, nonatomic) NSAttributedString *inputText;
@property (retain, nonatomic) NSNumber *inputScaleFactor;

+ (id)customAttributes;

- (id)outputImage;

@end
