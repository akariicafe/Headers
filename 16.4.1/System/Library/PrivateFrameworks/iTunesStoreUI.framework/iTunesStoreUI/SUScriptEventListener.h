@class NSString, WebScriptObject, NSLock;

@interface SUScriptEventListener : NSObject {
    NSLock *_lock;
}

@property (retain) WebScriptObject *callback;
@property (copy) NSString *name;
@property BOOL shouldUseCapture;

- (id)init;
- (void).cxx_destruct;

@end
