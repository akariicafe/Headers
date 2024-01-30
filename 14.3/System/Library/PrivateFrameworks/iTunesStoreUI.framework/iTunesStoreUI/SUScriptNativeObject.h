@class NSLock, SUScriptObject;

@interface SUScriptNativeObject : NSObject {
    id _strongObject;
    id _weakObject;
    SUScriptObject *_scriptObject;
}

@property (weak, nonatomic) id weakObject;
@property (retain, nonatomic) id strongObject;
@property (retain, nonatomic) NSLock *internalLock;
@property (retain) id object;
@property (weak) SUScriptObject *scriptObject;

+ (id)objectWithNativeObject:(id)a0;
+ (id)objectWithNativeObject:(id)a0 weak:(BOOL)a1;

- (void)unlock;
- (void)lock;
- (id)init;
- (void).cxx_destruct;
- (void)destroyNativeObject;
- (void)setupNativeObject;

@end
