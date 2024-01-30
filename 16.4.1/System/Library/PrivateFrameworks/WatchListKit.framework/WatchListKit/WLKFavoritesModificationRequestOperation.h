@class NSString;

@interface WLKFavoritesModificationRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, copy, nonatomic) NSString *entityID;

- (void).cxx_destruct;
- (id)initWithAction:(unsigned long long)a0 entityId:(id)a1 caller:(id)a2;
- (void)processResponse;

@end
