@class NSString, NSArray;

@interface RemindersUICore.TTRListBadgeView : UIView {
    void /* unknown type, empty encoding */ listColor;
    void /* unknown type, empty encoding */ emoji;
    void /* unknown type, empty encoding */ emojiFontSize;
    void /* unknown type, empty encoding */ imageColor;
    void /* unknown type, empty encoding */ selected;
    void /* unknown type, empty encoding */ useEmojiColors;
    void /* unknown type, empty encoding */ shadowParams;
    void /* unknown type, empty encoding */ selectionBorderSpacing;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ selectedLayer;
    void /* unknown type, empty encoding */ shadowLayer;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ emojiView;
    void /* unknown type, empty encoding */ nonEmojiBackgroundViewGradientSettings;
    void /* unknown type, empty encoding */ emojiBackgroundViewGradientSettings;
    void /* unknown type, empty encoding */ layerColorsDirty;
    void /* unknown type, empty encoding */ ttrAccessibilityName;
}

@property (nonatomic) void /* unknown type, empty encoding */ ttrAccessibilityShouldIgnoreAccessibilityName;
@property (nonatomic) void /* unknown type, empty encoding */ ttrAccessibilityShouldIgnoreTintColorValue;
@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic) unsigned long long accessibilityTraits;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
