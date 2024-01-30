@class NSString, NSSet;

@interface PKPayLaterBusinessChatTopic : NSObject {
    NSString *_displayText;
    NSString *_page;
    NSString *_targetDialog;
    NSString *_analyticsIdentifier;
    NSString *_serverDefinedContentRequestType;
    NSSet *_relevantFinancingPlanStates;
}

@property (copy, nonatomic) NSString *messageBubbleText;
@property (readonly, nonatomic) unsigned long long topicType;
@property (readonly, copy, nonatomic) NSString *displayText;
@property (readonly, copy, nonatomic) NSString *targetDialog;
@property (readonly, copy, nonatomic) NSString *page;
@property (readonly, copy, nonatomic) NSString *analyticsIdentifier;
@property (readonly, copy, nonatomic) NSString *payLaterContentRequestTypeString;
@property (readonly, nonatomic) BOOL requiresFinancingPlan;
@property (readonly, copy, nonatomic) NSSet *relevantFinancingPlanStates;

+ (id)genericBusinessChatTopicForContext:(unsigned long long)a0;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(unsigned long long)a0 topicType:(unsigned long long)a1;
- (id)messagesBubbleTextWithFinancingPlan:(id)a0 installment:(id)a1 payment:(id)a2 dispute:(id)a3;
- (void)updateWithBusinessChatTopic:(id)a0;

@end
