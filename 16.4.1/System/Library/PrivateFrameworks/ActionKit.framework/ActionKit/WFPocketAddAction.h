@class NSError, NSString, NSObject;
@protocol OS_dispatch_group;

@interface WFPocketAddAction : WFAction <PocketAPIDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_group> *addGroup;
@property (retain, nonatomic) NSError *lastError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contentDestinationWithError:(id *)a0;
- (void)finishRunningWithError:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)pocketAPI:(id)a0 receivedResponse:(id)a1 forAPIMethod:(id)a2 error:(id)a3;

@end
