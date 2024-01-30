@class NSString, CKContainer, NSObject;
@protocol OS_dispatch_source;

@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass> {
    NSObject<OS_dispatch_source> *_source;
    CKContainer *_ckContainer;
    long long _lastAccountStatus;
    BOOL _resumed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)dealloc;
- (void)main;
- (void)_accountDidChange;
- (void)start;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)subclassableDescriptionWithContext:(id)a0;
- (void)_accountChangeHandler;
- (id)descriptionForCKAccountStatus:(long long)a0 dumpContext:(id)a1;
- (id)initWithCKContainer:(id)a0;

@end
