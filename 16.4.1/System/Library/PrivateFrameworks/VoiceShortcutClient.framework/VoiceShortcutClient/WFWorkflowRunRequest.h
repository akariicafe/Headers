@class NSXPCListenerEndpoint, NSString, WFContentCollection, NSData, NSDictionary, NSSet;

@interface WFWorkflowRunRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *archivedInput;
@property (retain, nonatomic) WFContentCollection *cachedInput;
@property (nonatomic) unsigned long long presentationMode;
@property (readonly, nonatomic) id queueIdentifier;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *parentBundleIdentifier;
@property (copy, nonatomic) NSString *automationType;
@property (nonatomic) BOOL isAutomationSuggestion;
@property (copy, nonatomic) NSString *trialID;
@property (copy, nonatomic) NSDictionary *listenerEndpoints;
@property (nonatomic) unsigned long long outputBehavior;
@property (nonatomic) unsigned long long focusHandling;
@property (nonatomic) BOOL allowsDialogNotifications;
@property (nonatomic) BOOL allowsHandoff;
@property (nonatomic) BOOL donateInteraction;
@property (nonatomic) BOOL logRunEvent;
@property (retain, nonatomic) NSString *parentRunningContextIdentifier;
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteDialogPresenterEndpoint;
@property (copy, nonatomic) NSSet *extensionResourceClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0 presentationMode:(unsigned long long)a1;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)unableToDecodeInputError;

@end
