@interface PXForYouSettingAdvisoryGadgetFeedConfiguration : PXFeedConfiguration

- (BOOL)allowsPopOnEmptyBehavior;
- (unsigned long long)gadgetType;
- (id)init;
- (id)gadgetAccessoryButtonLocalizedTitle;
- (unsigned long long)gadgetAccessoryButtonType;
- (id)gadgetLocalizedTitle;
- (long long)horizontalGadgetStyle;
- (BOOL)wantsEmbeddedScrollView;
- (BOOL)wantsMultilineGadgetTitle;

@end
