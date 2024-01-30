@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TIRequestedInputModes : NSObject {
    BOOL _didLoad;
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_inputModesByDate;
}

+ (id)defaultDatabaseURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)_loadIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_saveInputModes;
- (id)_inputModes;
- (void)_inputModes:(id /* block */)a0;
- (void)_addInputMode:(id)a0 date:(id)a1 handler:(id /* block */)a2;
- (void)_removeInputModesBeforeDate:(id)a0 handler:(id /* block */)a1;
- (void)_removeAllInputModes:(id /* block */)a0;
- (void)inputModes:(id /* block */)a0;
- (void)addInputMode:(id)a0 date:(id)a1 handler:(id /* block */)a2;
- (void)removeInputModesBeforeDate:(id)a0 handler:(id /* block */)a1;
- (void)removeAllInputModes:(id /* block */)a0;

@end
