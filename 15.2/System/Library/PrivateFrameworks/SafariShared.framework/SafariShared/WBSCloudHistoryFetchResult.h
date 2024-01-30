@class NSArray, NSDictionary, NSData, NSMutableDictionary, NSMutableArray;

@interface WBSCloudHistoryFetchResult : NSObject {
    NSMutableArray *_mutableCloudHistoryVisits;
    NSMutableArray *_mutableHistoryTombstones;
    NSMutableDictionary *_mutableClientVersions;
}

@property (readonly, nonatomic) NSArray *cloudHistoryVisits;
@property (readonly, nonatomic) NSArray *historyTombstones;
@property (readonly, nonatomic) NSDictionary *clientVersions;
@property (readonly, nonatomic) NSData *serverChangeTokenData;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)_addCloudHistoryVisit:(id)a0;
- (void)_updateClientVersion:(unsigned long long)a0 seenAt:(id)a1;
- (void)_addHistoryTombstone:(id)a0;
- (void)_setServerChangeTokenData:(id)a0;

@end
