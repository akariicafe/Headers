@class NSArray, NSDictionary, NTPBIAdConfig;

@interface FCIAdConfiguration : NSObject {
    NTPBIAdConfig *_pbConfig;
    NSDictionary *_configDict;
}

@property (readonly, nonatomic, getter=areSegmentsEnabled) BOOL segmentsEnabled;
@property (readonly, nonatomic) double segmentsThreshold;
@property (readonly, nonatomic) long long segmentsSubmissionFrequency;
@property (readonly, nonatomic) long long segmentsHistoryWindowInterval;
@property (readonly, nonatomic) long long segmentsMinimumArticleCount;
@property (readonly, nonatomic) long long segmentsMinimumEventCount;
@property (readonly, nonatomic) double segmentsMinRelativeRate;
@property (readonly, nonatomic) NSArray *iAdSegmentIDs;
@property (readonly, nonatomic) NSDictionary *adStatusConditionsByType;
@property (readonly, nonatomic) double feedNumberofViewportsBetweenAds;
@property (readonly, nonatomic) double articleNumberofViewportsBetweenAds;

- (id)initWithConfigDictionary:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPBIAdConfig:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
