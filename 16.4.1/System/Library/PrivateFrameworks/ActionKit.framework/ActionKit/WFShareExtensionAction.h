@interface WFShareExtensionAction : WFAction

+ (id)userInterfaceProtocol;

- (id)extensionBundleIdentifier;
- (id)inputType;
- (id)inputConfiguration;
- (id)contentItemClasses;
- (id)descriptionSummary;
- (id)inputContentClasses;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)stringRepresentationForClasses:(id)a0;
- (id)extensionUserInfo;
- (id)shareExtensionDefinition;
- (id)socialServiceType;
- (id)socialTypes;
- (id)textItemHandling;

@end
