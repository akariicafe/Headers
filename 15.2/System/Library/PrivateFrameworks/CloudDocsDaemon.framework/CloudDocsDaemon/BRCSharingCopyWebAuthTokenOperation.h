@class NSString;

@interface BRCSharingCopyWebAuthTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass>

@property (retain, nonatomic) NSString *ckContainerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (id)createActivity;
- (id)initWithSyncContext:(id)a0 ckContainerID:(id)a1;

@end
