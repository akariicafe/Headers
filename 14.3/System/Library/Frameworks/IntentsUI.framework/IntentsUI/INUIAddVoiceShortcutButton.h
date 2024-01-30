@class INShortcut, NSString, UIImageView, INVoiceShortcut, CAFilter, UILabel, NSLayoutConstraint;
@protocol INUIAddVoiceShortcutButtonDelegate;

@interface INUIAddVoiceShortcutButton : UIButton <UIDragInteractionDelegate>

@property (retain, nonatomic) INVoiceShortcut *voiceShortcut;
@property (retain, nonatomic) CAFilter *highlightFilter;
@property (weak, nonatomic) UIImageView *sphiriImageView;
@property (weak, nonatomic) UIImageView *checkmarkImageView;
@property (weak, nonatomic) UILabel *addToSiriLabel;
@property (weak, nonatomic) UILabel *phraseLabel;
@property (retain, nonatomic) NSLayoutConstraint *checkmarkHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *addToSiriLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *addedToSiriLeadingConstraint;
@property (readonly, nonatomic) unsigned long long style;
@property (weak, nonatomic) id<INUIAddVoiceShortcutButtonDelegate> delegate;
@property (retain, nonatomic) INShortcut *shortcut;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateContent;
- (id)initWithStyle:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void)_didTapButton;
- (id)initWithCoder:(id)a0;
- (id)accessibilityLabel;
- (void)_createHighlightFilterIfNecessary;
- (void)layoutSubviews;
- (void)prepareForInterfaceBuilder;
- (void)setStyle:(unsigned long long)a0;
- (void)_configureWithStyle:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateColors;
- (void)setHighlighted:(BOOL)a0;
- (id)_backgroundColorForStyle:(unsigned long long)a0;
- (id)_textColorForStyle:(unsigned long long)a0;
- (id)_strokeColorForStyle:(unsigned long long)a0;
- (double)_strokeWidthForStyle:(unsigned long long)a0;
- (id)_addToSiriText;
- (id)_addedToSiriText;
- (id)_phraseText;
- (id)_addToSiriFont;
- (id)_phraseFont;
- (BOOL)_shouldUseLargerFont;
- (id)_sphiriImage;
- (id)_dynamicWhiteColor;
- (id)_dynamicBlackColor;
- (id)_dynamicColorWithLightColor:(id)a0 darkColor:(id)a1;
- (void)_updatePhraseVisibility;
- (void)_checkAndUpdateForShortcut;
- (void)_handleVoiceShortcutUpdateNotification:(id)a0;

@end
