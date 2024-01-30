@class NSString, NSMutableDictionary, NSArray;
@protocol SFAirDropBrowserDiffableDelegate, SFAirDropBrowserDelegate, SFAirDropBrowserBatchDelegate;

@interface SFAirDropBrowser : NSObject {
    struct __SFBrowser { } *_browser;
    NSMutableDictionary *_nodes;
    BOOL _shouldDeliverEmptyUpdates;
}

@property (weak) id<SFAirDropBrowserDiffableDelegate> diffableDelegate;
@property (readonly, nonatomic) NSMutableDictionary *nodeIDToNode;
@property (copy, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) NSArray *people;
@property (weak) id<SFAirDropBrowserDelegate> delegate;
@property (weak) id<SFAirDropBrowserBatchDelegate> batchDelegate;
@property (copy, nonatomic) NSString *sendingAppBundleID;
@property (copy, nonatomic) NSArray *urlsBeingShared;
@property (copy, nonatomic) NSArray *photosAssetIDs;

- (id)init;
- (void).cxx_destruct;
- (void)updateDiscoveredPeople;
- (void)handleBrowserCallBack;
- (void)getChangedIndexesForClientPeopleList:(id)a0 withCompletion:(id /* block */)a1;
- (void)dealloc;
- (void)stop;
- (void)pause;
- (void)start;
- (void)resume;

@end
