@class UIColor, NSDictionary, SUGradient;

@interface SUViewControllerScriptProperties : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL alwaysDispatchesScrollEvents;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSDictionary *contextDictionary;
@property (nonatomic) BOOL inputViewObeysDOMFocus;
@property (nonatomic, getter=isDoubleTapEnabled) BOOL doubleTapEnabled;
@property (nonatomic, getter=isScrollingDisabled) BOOL scrollingDisabled;
@property (nonatomic, getter=isEmbedded) BOOL embedded;
@property (nonatomic) long long loadingIndicatorStyle;
@property (retain, nonatomic) UIColor *loadingTextColor;
@property (retain, nonatomic) UIColor *loadingTextShadowColor;
@property (retain, nonatomic) SUGradient *placeholderBackgroundGradient;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollContentInsets;
@property (nonatomic) BOOL shouldLoadProgressively;
@property (nonatomic) BOOL shouldShowFormAccessory;
@property (nonatomic) BOOL showsBackgroundShadow;
@property (nonatomic) BOOL flashesScrollIndicators;
@property (nonatomic) BOOL showsHorizontalScrollIndicator;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (retain, nonatomic) UIColor *topExtensionColor;
@property (nonatomic) BOOL usesBlurredBackground;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
