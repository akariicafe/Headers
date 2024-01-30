@interface WFShareExtensionAction : WFAction

+ (id)userInterfaceProtocol;

- (id)extensionBundleIdentifier;
- (id)inputType;
- (id)inputConfiguration;
- (id)contentItemClasses;
- (id)inputContentClasses;
- (void)runWithRemoteUserInterface:(id)a0 input:(id)a1;
- (id)descriptionSummary;
- (id)stringRepresentationForClasses:(id)a0;
- (id)shareExtensionDefinition;
- (id)socialServiceType;
- (id)socialTypes;
- (id)textItemHandling;
- (id)extensionUserInfo;

@end
