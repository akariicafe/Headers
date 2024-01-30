@class NSString;

@interface CKDLongLivedCallbackRelayOperation : CKDOperation <CKDOperationInfoDelegate>

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)main;
- (BOOL)isLongLivedCallbackRelayOperation;
- (BOOL)shouldCheckAppVersion;
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)a0;
- (void)operationWithID:(id)a0 receivedCallback:(id)a1;

@end
