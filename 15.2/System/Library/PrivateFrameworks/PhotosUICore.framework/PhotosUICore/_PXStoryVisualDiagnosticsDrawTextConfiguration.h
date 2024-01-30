@class UIFont, NSString, UIColor, NSAttributedString;

@interface _PXStoryVisualDiagnosticsDrawTextConfiguration : NSObject <PXStoryVisualDiagnosticsDrawTextConfiguration>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct CGPoint { double x; double y; } relativePosition;

- (void).cxx_destruct;
- (id)init;

@end
