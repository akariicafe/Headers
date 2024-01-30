@class NSString, NFLFeedSettings, NFLAbstractCellPropertyProvider;

@interface NFLAbstractRanker : NSObject

@property (readonly, nonatomic) NSString *rankerName;
@property (readonly, nonatomic) long long rankerWeight;
@property (retain, nonatomic) NFLAbstractRanker *nextRanker;
@property (weak, nonatomic) NFLFeedSettings *feedSettings;
@property (retain, nonatomic) NFLAbstractCellPropertyProvider *propertyProvider;

- (void).cxx_destruct;
- (double)rankLayoutData:(id)a0 withTileInfo:(id)a1 veto:(BOOL *)a2;
- (id)rankedLayoutForLayoutData:(id)a0 withTileInfo:(id)a1;
- (id)initWithFeedSettings:(id)a0;
- (double)_applyRanksForCardWithLayoutData:(id)a0 tileInfo:(id)a1 successfulRankCount:(long long *)a2 veto:(BOOL *)a3 rankerDictionary:(id)a4;

@end
