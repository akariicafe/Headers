@class NSString, NSArray;

@interface RemindersUICore.TTRListBadgeView : UIView {
    void /* unknown type, empty encoding */ listColorInfo;
    void /* unknown type, empty encoding */ emoji;
    void /* unknown type, empty encoding */ emojiFontSize;
    void /* unknown type, empty encoding */ imageParams;
    void /* unknown type, empty encoding */ selected;
    void /* unknown type, empty encoding */ isContextMenuTarget;
    void /* unknown type, empty encoding */ backgroundParams;
    void /* unknown type, empty encoding */ shadowParams;
    void /* unknown type, empty encoding */ selectionParams;
    void /* unknown type, empty encoding */ contentInset;
    void /* unknown type, empty encoding */ backgroundLayer;
    void /* unknown type, empty encoding */ selectedLayer;
    void /* unknown type, empty encoding */ shadowLayer;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ emojiView;
    void /* unknown type, empty encoding */ customSmartListActionViews;
    void /* unknown type, empty encoding */ nonEmojiBackgroundLayerGradientSettings;
    void /* unknown type, empty encoding */ emojiBackgroundLayerGradientSettings;
    void /* unknown type, empty encoding */ layerColorsDirty;
    void /* unknown type, empty encoding */ ttrAccessibilityName;
    void /* unknown type, empty encoding */ accessibilityDelegate;
}

@property (nonatomic) void /* unknown type, empty encoding */ ttrAccessibilityShouldIgnoreAccessibilityName;
@property (nonatomic) void /* unknown type, empty encoding */ ttrAccessibilityShouldIgnoreTintColorValue;
@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic) unsigned long long accessibilityTraits;

- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;

@end
