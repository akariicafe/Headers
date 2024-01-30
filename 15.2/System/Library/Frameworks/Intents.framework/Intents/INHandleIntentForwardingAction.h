@interface INHandleIntentForwardingAction : INIntentForwardingAction

+ (Class)responseClass;

- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)_completionHandlerWithActionCompletionHandler:(id /* block */)a0;

@end
