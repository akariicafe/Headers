@class NSMutableDictionary;

@interface VUIMarkAsWatchedRequestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *ongoingItemIDOperationDictionary;

+ (id)sharedInstance;

- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (void)sendRequestForItemID:(id)a0 itemType:(id)a1 channelID:(id)a2 adamID:(id)a3;

@end
