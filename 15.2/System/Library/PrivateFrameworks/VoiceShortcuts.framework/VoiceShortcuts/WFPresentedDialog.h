@class WFWorkflowRunningContext, WFDialogResponse, WFDialogRequest;

@interface WFPresentedDialog : NSObject

@property (readonly, nonatomic) WFDialogRequest *request;
@property (retain, nonatomic) WFDialogResponse *response;
@property (readonly, nonatomic) unsigned long long presentationMode;
@property (readonly, nonatomic) WFWorkflowRunningContext *context;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 presentationMode:(unsigned long long)a1 runningContext:(id)a2 completionHandler:(id /* block */)a3;

@end
