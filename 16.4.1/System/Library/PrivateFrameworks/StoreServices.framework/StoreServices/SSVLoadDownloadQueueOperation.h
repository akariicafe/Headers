@class NSLock, SSURLRequestProperties, NSString, NSURL, NSMutableOrderedSet, NSNumber, NSMutableArray;

@interface SSVLoadDownloadQueueOperation : SSVComplexOperation {
    NSNumber *_accountIdentifier;
    NSMutableOrderedSet *_downloads;
    BOOL _needsAuthentication;
    NSMutableArray *_rangesToLoad;
    long long _reason;
    NSString *_requestIdentifier;
    SSURLRequestProperties *_requestProperties;
    NSString *_mdSyncState;
    NSLock *_lock;
}

@property (readonly) SSURLRequestProperties *requestProperties;
@property (retain) NSNumber *accountIdentifier;
@property BOOL needsAuthentication;
@property long long reason;
@property (copy) NSString *requestIdentifier;
@property (copy, nonatomic) NSURL *requestURL;
@property (readonly) NSMutableOrderedSet *downloads;
@property (retain) NSString *powerAssertionIdentifier;
@property (copy, nonatomic) NSString *storeCorrelationID;

+ (id)newLoadAutomaticDownloadQueueOperation;

- (void)lock;
- (id)_account;
- (void)main;
- (void)unlock;
- (id)init;
- (void).cxx_destruct;
- (void)_handleResponse:(id)a0;
- (BOOL)_loadDownloadsFromStart:(id)a0 toEnd:(id)a1 url:(id)a2;
- (id)_newURLOperationWithStartIdentifier:(id)a0 endIdentifier:(id)a1 url:(id)a2;
- (void)addGUIDToBody:(id)a0;
- (void)addKeybagSyncToBody:(id)a0;
- (BOOL)featureEnabledForBagKey:(id)a0 bagContext:(id)a1 error:(id *)a2;
- (id)gzipData:(id)a0;
- (void)importKeybagSync:(id)a0;
- (id)initWithRequestProperties:(id)a0;
- (id)resolveBagURLForKey:(id)a0 bagContext:(id)a1 error:(id *)a2;
- (void)setDownloadsMetadata:(id)a0;

@end
