@class NSString, CLAPIEngine;

@interface WFCloudAppUploadAction : WFAction <CLAPIEngineDelegate>

@property (retain, nonatomic) CLAPIEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)cancel;
- (void).cxx_destruct;
- (id)contentDestinationWithError:(id *)a0;
- (void)finishRunningWithError:(id)a0;
- (BOOL)isProgressIndeterminate;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)shouldBeSuggestedAfterAction:(id)a0 inWorkflow:(id)a1;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)fileUploadDidProgress:(double)a0 connectionIdentifier:(id)a1 userInfo:(id)a2;
- (void)fileUploadDidSucceedWithResultingItem:(id)a0 connectionIdentifier:(id)a1 userInfo:(id)a2;
- (void)linkBookmarkDidSucceedWithResultingItem:(id)a0 connectionIdentifier:(id)a1 userInfo:(id)a2;
- (void)requestDidFailWithError:(id)a0 connectionIdentifier:(id)a1 userInfo:(id)a2;

@end
