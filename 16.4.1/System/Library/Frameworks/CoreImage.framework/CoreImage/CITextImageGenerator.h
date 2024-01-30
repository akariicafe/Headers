@class NSString, NSNumber;

@interface CITextImageGenerator : CIFilter

@property (retain, nonatomic) NSString *inputText;
@property (retain, nonatomic) NSString *inputFontName;
@property (retain, nonatomic) NSNumber *inputFontSize;
@property (retain, nonatomic) NSNumber *inputScaleFactor;
@property (retain, nonatomic) NSNumber *inputPadding;

+ (id)customAttributes;

- (id)outputImage;

@end
