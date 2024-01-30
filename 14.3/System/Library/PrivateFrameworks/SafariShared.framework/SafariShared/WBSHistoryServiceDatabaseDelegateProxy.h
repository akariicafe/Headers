@class NSString;
@protocol NSXPCProxyCreating;

@interface WBSHistoryServiceDatabaseDelegateProxy : NSObject <WBSHistoryServiceDatabaseDelegate> {
    id<NSXPCProxyCreating> _proxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportPermanentIDsForVisits:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithProxy:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reportSevereError:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)_defaultProxyErrorHandlerWithSimpleReplyCompletionHandler:(id /* block */)a0;
- (void)reportPermanentIDsForItems:(id)a0 completionHandler:(id /* block */)a1;

@end
