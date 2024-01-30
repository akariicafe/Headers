@class UIColor, NSString, UIView, NSAttributedString;

@interface SBUISystemApertureTextContentProvider : NSObject <SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) long long textAlignment;
@property (readonly, nonatomic) UIView *providedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *contentColor;

+ (id)_textColorForTextStyle:(long long)a0;

- (void)setFontWeight:(double)a0;
- (void).cxx_destruct;
- (id)_initWithText:(id)a0 attributedText:(id)a1 style:(long long)a2;
- (id)_providedView;
- (id)initWithAttributedText:(id)a0 style:(long long)a1;
- (id)initWithText:(id)a0 style:(long long)a1;

@end
