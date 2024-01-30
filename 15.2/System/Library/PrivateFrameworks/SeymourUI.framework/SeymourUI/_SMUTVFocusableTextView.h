@class UIColor, NSAttributedString, NSString;

@interface _SMUTVFocusableTextView : _TVFocusableTextView <SMUTVFocusableTextView>

@property (nonatomic) double maximumLineWidth;
@property (nonatomic) BOOL _textTruncating;
@property (retain, nonatomic) NSAttributedString *descriptionText;
@property (retain, nonatomic) UIColor *descriptionTextColor;
@property (retain, nonatomic) UIColor *descriptionTextHighlightColor;
@property (nonatomic) long long descriptionTextAlignment;
@property (retain, nonatomic) UIColor *highlightBackgroundColor;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (readonly, nonatomic, getter=isTextTruncating) BOOL textTruncating;
@property (nonatomic) double moreHighlightPadding;
@property (nonatomic) BOOL moreLabelOnNewLine;
@property (retain, nonatomic) UIColor *moreLabelTextColor;
@property (retain, nonatomic) NSString *moreLabelText;
@property (nonatomic) BOOL trackHorizontal;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } padding;
@property (nonatomic) BOOL alwaysShowBackground;
@property (nonatomic) unsigned long long focusSizeIncrease;
@property (nonatomic, getter=isAlwaysFocusable) BOOL alwaysFocusable;
@property (nonatomic) BOOL disableFocus;
@property (copy, nonatomic) id /* block */ selectionHandler;
@property (copy, nonatomic) id /* block */ playHandler;


@end
