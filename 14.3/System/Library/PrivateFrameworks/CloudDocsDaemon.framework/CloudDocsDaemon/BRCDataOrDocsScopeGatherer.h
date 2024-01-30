@class NSString, BRCNotificationPipe, BRCItemGlobalID, BRCAccountSession, NSMutableArray;

@interface BRCDataOrDocsScopeGatherer : NSObject {
    BRCNotificationPipe *_pipe;
    id /* block */ _gatherReply;
    NSMutableArray *_gatheringAppLibraries;
    unsigned long long _gatheringRankMin;
    unsigned long long _gatheringRankMax;
    unsigned long long _lastSentRank;
    NSString *_gatheringNamePrefix;
    BRCAccountSession *_session;
    BOOL _includesDeadItems;
}

@property (retain, nonatomic) BRCItemGlobalID *gatheredChildrenItemGlobalID;

- (void).cxx_destruct;
- (void)invalidate;
- (void)done;
- (void)gatherWithBatchSize:(long long)a0 completion:(id /* block */)a1;
- (id /* block */)_popGatherReply;
- (id)initWithNotificationPipe:(id)a0 appLibraries:(id)a1 startingRank:(unsigned long long)a2 maxRank:(unsigned long long)a3 withDeadItems:(BOOL)a4 gatherReply:(id /* block */)a5;

@end
