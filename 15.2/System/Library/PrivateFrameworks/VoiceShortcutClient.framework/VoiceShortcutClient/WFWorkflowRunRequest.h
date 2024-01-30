@class NSXPCListenerEndpoint, NSString, WFContentCollection, NSData, NSDictionary, WFWorkflowRunDescriptor;

@interface WFWorkflowRunRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *archivedInput;
@property (retain, nonatomic) WFContentCollection *cachedInput;
@property (readonly, nonatomic) id queueIdentifier;
@property (readonly, nonatomic) WFWorkflowRunDescriptor *descriptor;
@property (readonly, nonatomic) unsigned long long presentationMode;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *automationType;
@property (nonatomic) BOOL isAutomationSuggestion;
@property (copy, nonatomic) NSString *trialID;
@property (copy, nonatomic) NSDictionary *listenerEndpoints;
@property (nonatomic) unsigned long long outputBehavior;
@property (nonatomic) unsigned long long focusHandling;
@property (nonatomic) BOOL allowsDialogNotifications;
@property (nonatomic) BOOL donateInteraction;
@property (nonatomic) BOOL logRunEvent;
@property (retain, nonatomic) NSString *parentRunningContextIdentifier;
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteDialogPresenterEndpoint;

- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDescriptor:(id)a0 input:(id)a1 presentationMode:(unsigned long long)a2;
- (id)unableToDecodeInputError;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
