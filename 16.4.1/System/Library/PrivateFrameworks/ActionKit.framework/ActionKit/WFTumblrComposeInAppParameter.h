@interface WFTumblrComposeInAppParameter : WFSwitchParameter <ICAppInstallStatusObserver>

- (BOOL)isHidden;
- (id)defaultSerializedRepresentation;
- (void)appRegistry:(id)a0 installStatusChangedForApp:(id)a1;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
