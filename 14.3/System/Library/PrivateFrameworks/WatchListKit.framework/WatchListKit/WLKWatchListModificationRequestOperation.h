@class NSString, WLKWatchListModificationResponse;

@interface WLKWatchListModificationRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) WLKWatchListModificationResponse *response;

- (void).cxx_destruct;
- (id)initWithAction:(unsigned long long)a0 canonicalID:(id)a1 caller:(id)a2;
- (void)processResponse;
- (id)initWithAction:(unsigned long long)a0 identifier:(id)a1 caller:(id)a2;
- (id)initWithAction:(unsigned long long)a0 statsID:(id)a1 caller:(id)a2;
- (id)initWithAction:(unsigned long long)a0 channelID:(id)a1 externalID:(id)a2 caller:(id)a3;

@end
