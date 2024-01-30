@class RTIInputSystemSourceSession, NSString, NSDictionary, NSObject, RTIInputSystemService;
@protocol OS_dispatch_queue;

@interface SFRemoteTextInputClient : NSObject <RTIInputSystemClientDelegate, RTIInputSystemDelegate, RTIInputSystemPayloadDelegate, RTIInputSystemSessionDelegate> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _paused;
    RTIInputSystemService *_rtiService;
    RTIInputSystemSourceSession *_rtiSourceSession;
}

@property (readonly, copy, nonatomic) NSDictionary *currentPayload;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (readonly, nonatomic) RTIInputSystemSourceSession *sourceSession;
@property (copy, nonatomic) id /* block */ textInputDidBegin;
@property (copy, nonatomic) id /* block */ textInputDidEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (void)handleUsername:(id)a0 password:(id)a1;
- (void)flushOperations;
- (void)handleTextActionPayload:(id)a0;
- (void)dealloc;
- (void)fireEventHandlerWithPayload:(id)a0;
- (void)inputSystemService:(id)a0 didCreateInputSession:(id)a1;
- (void)_handleSessionEvent:(long long)a0 forSession:(id)a1;
- (void)inputSystemService:(id)a0 inputSessionDocumentDidChange:(id)a1;
- (id)init;
- (void)activate;
- (void)inputSystemService:(id)a0 inputSessionDidEnd:(id)a1;
- (void)inputSystemService:(id)a0 inputSessionDidPause:(id)a1 withReason:(id)a2;
- (void)invalidate;
- (void)inputSystemService:(id)a0 inputSessionDidBegin:(id)a1;
- (void)inputSystemService:(id)a0 inputSessionDidUnpause:(id)a1 withReason:(id)a2;
- (void)inputSystemService:(id)a0 inputSessionDidDie:(id)a1;
- (void).cxx_destruct;
- (void)performTextOperations:(id)a0;
- (void)_fireEventHandlerWithPayload:(id)a0;
- (void)handleTextInputData:(id)a0;

@end
