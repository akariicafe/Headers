@class NSString;

@interface SXFullscreenCaptionDarkModePolicyException : NSObject <SXDarkModePolicyException>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)shouldApplyDarkModeToTextStyleBackgroundColorsForComponent:(id)a0 DOM:(id)a1;
- (long long)shouldApplyDarkModeToTextStyleForegroundColorsForComponent:(id)a0 DOM:(id)a1;
- (long long)shouldApplyAutoDarkModeForComponentClassification:(id)a0;

@end
