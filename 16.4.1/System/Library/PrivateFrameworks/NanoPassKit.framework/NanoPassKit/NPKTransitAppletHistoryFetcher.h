@class NSString, NSObject;
@protocol OS_dispatch_queue, NPKTransitAppletHistoryFetcherDelegate, NFSession;

@interface NPKTransitAppletHistoryFetcher : NSObject

@property (retain, nonatomic) NSString *aidToFetch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<NFSession> *pendingSessionHandle;
@property (weak, nonatomic) id<NPKTransitAppletHistoryFetcherDelegate> delegate;

- (id)initWithCallbackQueue:(id)a0;
- (void).cxx_destruct;
- (void)_handleActiveSecureElementManagerSession:(id)a0;
- (void)_handleSecureElementSessionFailureWithError:(id)a0;
- (void)requestTransitHistoryFetch;
- (void)setAIDToFetch:(id)a0;

@end
