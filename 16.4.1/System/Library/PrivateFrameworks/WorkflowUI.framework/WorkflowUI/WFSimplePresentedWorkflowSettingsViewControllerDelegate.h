@class NSString;

@interface WFSimplePresentedWorkflowSettingsViewControllerDelegate : NSObject <WFWorkflowSettingsViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)settingsViewControllerWantsToKnowIfNewShortcutFlow:(id)a0;
- (void)settingsViewControllerWantsWorkflowReload:(id)a0;

@end
