@class UIColor, NSString, NSAttributedString, NSNumber;

@interface LPCaptionPresentationProperties : NSObject

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double textScale;
@property (retain, nonatomic) NSNumber *maximumNumberOfLines;

- (id)init;
- (void).cxx_destruct;

@end
