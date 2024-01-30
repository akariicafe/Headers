@class INIntentExecutionInfo;

@interface WFIntentResultUIAvailableResource : WFResource

@property (readonly, nonatomic) INIntentExecutionInfo *executionInfo;
@property (readonly, nonatomic, getter=isEligibleForWidgets) BOOL eligibleForWidgets;
@property (readonly, nonatomic) BOOL hasSuccessResponseWithDialog;

+ (BOOL)mustBeAvailableForDisplay;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)refreshAvailability;
- (id)initWithDefinition:(id)a0 intentExecutionInfo:(id)a1 isEligibleForWidgets:(BOOL)a2 hasSuccessResponseWithDialog:(BOOL)a3;

@end
