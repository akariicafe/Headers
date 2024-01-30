@class NSURL, NSString;

@interface LPAssociatedApplicationMetadataFetcher : LPFetcher {
    id /* block */ _completionHandler;
}

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (void)cancel;
- (void).cxx_destruct;
- (void)_completedWithClipMetadata:(id)a0 iconURL:(id)a1 error:(id)a2;
- (void)_failedWithErrorCode:(long long)a0 underlyingError:(id)a1;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
