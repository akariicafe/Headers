@class COMeshCommand, NSString, COMeshNode;

@interface COMeshControllerQueuedCommand : NSObject <COMeshControllerQueuedElementProtocol>

@property (readonly, nonatomic) COMeshCommand *command;
@property (readonly, copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) COMeshNode *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invokeCallbackWithError:(id)a0;
- (id)initWithCommand:(id)a0 sentCallback:(id /* block */)a1;

@end
