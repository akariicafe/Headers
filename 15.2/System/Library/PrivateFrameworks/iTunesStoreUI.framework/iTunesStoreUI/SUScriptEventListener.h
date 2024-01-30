@class NSString, WebScriptObject, NSLock;

@interface SUScriptEventListener : NSObject {
    NSLock *_lock;
}

@property (retain) WebScriptObject *callback;
@property (copy) NSString *name;
@property BOOL shouldUseCapture;

- (void).cxx_destruct;
- (id)init;

@end
