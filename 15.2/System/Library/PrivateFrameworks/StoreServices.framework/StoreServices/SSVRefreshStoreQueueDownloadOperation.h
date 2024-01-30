@class NSNumber, NSString;

@interface SSVRefreshStoreQueueDownloadOperation : SSVLoadDownloadQueueOperation {
    NSString *_downloadTrasactionID;
    NSNumber *_accountID;
}

@property (readonly) NSNumber *accountID;
@property (readonly) NSString *downloadTransactionID;

- (void)main;
- (void).cxx_destruct;
- (BOOL)_refreshDownloadWithTransactionID:(id)a0 accountID:(id)a1 bagKey:(id)a2 error:(id *)a3;
- (id)initWithDownloadTransactionIdentifier:(id)a0 accountID:(id)a1;
- (id)isDownloadTransactionID;

@end
