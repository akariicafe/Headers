@class NSArray, NSDictionary, NSString, NFLFeedSettings;

@interface NFLSubBatchLayout : NSObject <NFLFeedComponentLayout>

@property (retain, nonatomic) NFLFeedSettings *feedSettings;
@property (copy, nonatomic) NSArray *tileInfosUsed;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSDictionary *layoutDataByTileInfo;
@property (readonly, nonatomic) double rank;
@property (readonly, nonatomic) unsigned long long rowSpan;
@property (readonly, nonatomic) unsigned long long columnSpan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subBatchFromHeadlines:(id)a0 feedSettings:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)layoutInfosAtRowOrigin:(long long)a0 columnOrigin:(long long)a1 subBatchRowOffset:(long long)a2 feedSettings:(id)a3;
- (id)singleComponentLayouts;
- (id)initWithFeedSettings:(id)a0;
- (id)layoutInfosWithFeedSettings:(id)a0;

@end
