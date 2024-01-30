@class NSString, WFTrigger, NSData;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSString *workflowID;
@property (readonly, nonatomic) WFTrigger *trigger;
@property (readonly, nonatomic) BOOL shouldPrompt;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) int source;
@property (copy, nonatomic) NSData *suggestionData;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(BOOL)a3 enabled:(BOOL)a4;
- (id)initWithIdentifier:(id)a0 workflowID:(id)a1 trigger:(id)a2 shouldPrompt:(BOOL)a3 enabled:(BOOL)a4 triggerSource:(int)a5 suggestionData:(id)a6;

@end
