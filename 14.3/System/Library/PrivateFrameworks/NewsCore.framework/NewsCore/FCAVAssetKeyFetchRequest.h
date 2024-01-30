@class AVContentKeySession, NSMutableSet, NSMutableArray;

@interface FCAVAssetKeyFetchRequest : NSObject

@property (readonly, nonatomic) AVContentKeySession *contentKeySession;
@property (readonly, nonatomic) NSMutableSet *remainingKeyURIs;
@property (readonly, nonatomic) BOOL forceRefresh;
@property (readonly, nonatomic) NSMutableArray *errorsEncountered;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

- (id)initWithContentKeySession:(id)a0 keyURIs:(id)a1 forceRefresh:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;

@end
