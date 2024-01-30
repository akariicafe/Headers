@class NSString;

@interface WLKMarkAsWatchedRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSString *brandID;

- (void).cxx_destruct;
- (id)initWithItemID:(id)a0 itemType:(id)a1 brandID:(id)a2 caller:(id)a3;

@end
