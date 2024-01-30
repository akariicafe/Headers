@class NSString;

@interface WFModuleHeadingActionSettingsDelegate : NSObject <WFActionSettingsViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settingsViewControllerDidFinish:(id)a0;

@end
