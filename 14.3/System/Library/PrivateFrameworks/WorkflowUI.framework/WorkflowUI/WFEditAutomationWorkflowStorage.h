@class WFWorkflowRecord, NSString, WFWorkflowReference;

@interface WFEditAutomationWorkflowStorage : NSObject <WFWorkflowStorage>

@property (readonly, nonatomic) WFWorkflowReference *reference;
@property (copy, nonatomic) WFWorkflowRecord *originalRecord;
@property (copy, nonatomic) WFWorkflowRecord *lastSavedRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
