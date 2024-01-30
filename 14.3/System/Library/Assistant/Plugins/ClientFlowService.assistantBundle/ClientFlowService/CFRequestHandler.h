@class CFServiceHelper;

@interface CFRequestHandler : NSObject

@property (retain) CFServiceHelper *serviceHelper;

- (void).cxx_destruct;
- (void)handleCommand:(id)a0 completion:(id /* block */)a1;
- (id)initWithServiceHelper:(id)a0;
- (id)initClientLiteHelper;
- (void)handleCommandCompletionWithResponse:(id)a0 forCommand:(id)a1 startOfExecution:(double)a2;
- (BOOL)isTimeoutDisabled;

@end
