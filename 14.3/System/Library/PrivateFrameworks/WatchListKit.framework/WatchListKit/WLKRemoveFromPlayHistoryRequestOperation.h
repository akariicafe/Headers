@class NSString;

@interface WLKRemoveFromPlayHistoryRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *deleteID;

- (void).cxx_destruct;
- (id)initWithDeleteID:(id)a0 caller:(id)a1 isContinueWatching:(BOOL)a2;

@end
