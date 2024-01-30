@interface PencilSettingsStatisticsManager : NSObject

+ (id)sharedInstance;

- (void)recordEducationPencilInputInteraction:(long long)a0;
- (void)recordEducationPencilDidShow:(double)a0;
- (void)recordEducationPanelChanged:(long long)a0;
- (id)stringForElementType:(long long)a0;
- (void)recordSetPencilPerferredAction:(long long)a0;
- (void)recordOnlyUsePencilToggle:(BOOL)a0;
- (void)recordDrawPencilForTextInputToggle:(BOOL)a0;

@end
