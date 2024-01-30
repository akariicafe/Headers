@class NSString;

@interface WLKRemoveFromPlayHistoryRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *deleteID;

- (id)initWithItemID:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeleteID:(id)a0 caller:(id)a1 isContinueWatching:(BOOL)a2;

@end
