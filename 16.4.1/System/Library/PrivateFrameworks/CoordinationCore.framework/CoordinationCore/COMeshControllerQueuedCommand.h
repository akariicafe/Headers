@class COMeshCommand, NSString, COMeshNode;

@interface COMeshControllerQueuedCommand : NSObject <COMeshControllerQueuedElementProtocol>

@property (readonly, nonatomic) COMeshCommand *command;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) COMeshNode *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)invokeCallbackWithError:(id)a0;

@end
