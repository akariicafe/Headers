@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>

- (BOOL)isHidden;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (id)defaultSerializedRepresentation;
- (void)appRegistry:(id)a0 installStatusChangedForApp:(id)a1;

@end
