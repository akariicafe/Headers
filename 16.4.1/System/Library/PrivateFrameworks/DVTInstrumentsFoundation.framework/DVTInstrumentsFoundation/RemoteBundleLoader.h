@class NSString, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface RemoteBundleLoader : NSObject {
    unsigned int _targetTask;
    int _targetPid;
    id /* block */ _releaseOpaqueSymbolicator;
    struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; } *_remoteFunctionAddresses;
    NSString *_helperLaunchPath;
    NSObject<OS_dispatch_queue> *_symbolLookupQueue;
    NSObject<OS_dispatch_queue> *_injectionQueue;
    NSError *_missingSymbolError;
    BOOL _attemptedSymbolLookup;
    BOOL _exited;
}

- (id)initWithTask:(unsigned int)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_lookupFunctionAddresses:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (void)scheduleLibraryLoad:(id)a0 calling:(id)a1 arguments:(id)a2 callback:(id /* block */)a3;

@end
