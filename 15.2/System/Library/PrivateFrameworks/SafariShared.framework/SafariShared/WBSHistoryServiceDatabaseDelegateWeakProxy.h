@class NSString;
@protocol WBSHistoryServiceDatabaseDelegate;

@interface WBSHistoryServiceDatabaseDelegateWeakProxy : NSObject <WBSHistoryServiceDatabaseDelegate> {
    id<WBSHistoryServiceDatabaseDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleEvent:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportPermanentIDsForVisits:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportSevereError:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reportPermanentIDsForItems:(id)a0 completionHandler:(id /* block */)a1;

@end
