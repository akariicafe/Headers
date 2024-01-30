@class NSString, NSArray, NSData, WFWorkflow, HFTriggerActionsSetsUISummary;

@interface WFHomeWorkflow : NSObject {
    WFWorkflow *_cachedWorkflow;
}

@property (retain, nonatomic) HFTriggerActionsSetsUISummary *actionSetsSummary;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *summaryString;
@property (readonly, copy, nonatomic) NSArray *summaryIconNames;
@property (readonly, copy, nonatomic) NSArray *summaryIconDescriptors;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;

+ (void)setCachedHomes:(id)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)debugDescription;
- (id)triggerActionSetsBuilders;
- (id)actionSetsFromTriggerActionSetsBuilders:(id)a0;
- (id)workflowWithEnvironment:(long long)a0 error:(id *)a1;

@end
