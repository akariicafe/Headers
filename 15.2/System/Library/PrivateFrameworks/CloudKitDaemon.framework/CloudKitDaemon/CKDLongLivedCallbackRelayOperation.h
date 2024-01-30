@class NSString;

@interface CKDLongLivedCallbackRelayOperation : CKDOperation <CKDOperationInfoDelegate>

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)shouldCheckAppVersion;
- (void)main;
- (void)cancel;
- (BOOL)isLongLivedCallbackRelayOperation;
- (void)wasUnexpectedlyUnregisteredForOperationID:(id)a0;
- (void)operationWithID:(id)a0 receivedCallback:(id)a1;

@end
