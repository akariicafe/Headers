@class NSMutableDictionary;

@interface VUIRemoveFromPlayHistoryRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingDeleteIDOperationDictionary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)sendRequestForDeleteID:(id)a0 canonicalID:(id)a1 isContinueWatching:(BOOL)a2;
- (void)sendRequestForDeleteID:(id)a0 isContinueWatching:(BOOL)a1;

@end
