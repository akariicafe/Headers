@class NSString, WFContentCollection, NSData, NSDictionary, WFWorkflowRunDescriptor;

@interface WFWorkflowRunRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *archivedInput;
@property (retain, nonatomic) WFContentCollection *cachedInput;
@property (readonly, nonatomic) WFWorkflowRunDescriptor *descriptor;
@property (readonly, nonatomic) unsigned long long presentationMode;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *automationType;
@property (nonatomic) BOOL isAutomationSuggestion;
@property (copy, nonatomic) NSString *trialID;
@property (copy, nonatomic) NSDictionary *listenerEndpoints;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)getInputWithCompletionHandler:(id /* block */)a0;
- (id)initWithDescriptor:(id)a0 input:(id)a1 presentationMode:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
