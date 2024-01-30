@class UIFont, NSString, UIColor, NSAttributedString;

@interface _PXVisualDiagnosticsDrawTextConfiguration : NSObject <PXVisualDiagnosticsDrawTextConfiguration>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct CGPoint { double x; double y; } relativePosition;

- (id)init;
- (void).cxx_destruct;

@end
