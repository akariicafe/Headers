@class NSString, NSMutableArray, NSObject;
@protocol NPHVMSessionDelegate;

@interface NPHVMSyncSessionManager : NSObject <SYSessionDelegate, SYChangeSerializer> {
    NSMutableArray *_deltaSyncChanges;
    NSMutableArray *_deltaSyncChangeTypes;
    unsigned long long _deltaSyncCurrentIdx;
    id /* block */ _completionCallback;
    BOOL _cancel;
}

@property (nonatomic) NSObject<NPHVMSessionDelegate> *vmSessionDelegate;
@property (copy, nonatomic) id /* block */ vmSessionProgressCallback;
@property (nonatomic) BOOL sessionInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)dataFromChange:(id)a0;
- (id)changeFromData:(id)a0 ofType:(long long)a1;
- (id)decodeChangeData:(id)a0 fromProtocolVersion:(long long)a1 ofType:(long long)a2;
- (id)encodeSYChangeForBackwardCompatibility:(id)a0 protocolVersion:(long long)a1;
- (void)syncSession:(id)a0 applyChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSession:(id)a0 didEndWithError:(id)a1;
- (unsigned int)syncSession:(id)a0 enqueueChanges:(id /* block */)a1 error:(id *)a2;
- (BOOL)syncSession:(id)a0 resetDataStoreWithError:(id *)a1;
- (void)enqueueVoicemailChanges:(id)a0 changeType:(long long)a1;

@end
