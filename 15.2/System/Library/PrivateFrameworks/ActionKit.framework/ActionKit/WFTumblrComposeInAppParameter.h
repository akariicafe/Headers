@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>

- (BOOL)isHidden;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)appRegistry:(id)a0 installStatusChangedForApp:(id)a1;

@end
