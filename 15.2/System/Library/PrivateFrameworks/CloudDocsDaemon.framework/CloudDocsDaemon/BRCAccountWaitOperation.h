@class NSString, CKContainer, NSObject;
@protocol OS_dispatch_source;

@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass> {
    NSObject<OS_dispatch_source> *_source;
    CKContainer *_ckContainer;
    long long _lastAccountStatus;
    BOOL _resumed;
    BOOL _cancelled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_accountChangeHandler;
- (id)initWithCKContainer:(id)a0;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)_accountDidChange;
- (void)start;
- (id)descriptionForCKAccountStatus:(long long)a0 dumpContext:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (void)resumeIfNecessary;
- (void)dealloc;
- (void)cancel;
- (id)subclassableDescriptionWithContext:(id)a0;

@end
