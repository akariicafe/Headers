@class NSString;

@interface TIMessageEvent : NSObject

@property (retain, nonatomic) NSString *messageText;
@property double startTime;
@property double endTime;
@property int wordsEnteredCount;
@property int finalWordsEnteredCount;
@property int staticCount;
@property int dynamicCount;
@property int textReplacementsCount;
@property int addressBookCount;
@property int namedEntitiesCount;
@property int oovCount;
@property int supplementalLexiconCount;
@property int emojiPlaneCount;
@property int emojiPredictionCount;
@property int emojiSearchCount;
@property int emojiPopoverCount;
@property int responseKitCount;
@property int pqtCount;
@property int multilingualCount;

- (void).cxx_destruct;
- (id)init;
- (void)analyzeWordEntry:(id)a0;
- (void)analyzeWordEntryAligned:(id)a0;
- (BOOL)hasTextInWordEntry:(id)a0;
- (void)adjustEmojiCountsFromKeyboardInputForWordAligned:(id)a0;
- (BOOL)hasText:(id)a0;
- (void)dispatchWithFeatureUsageMetricsCache:(id)a0 andContext:(id)a1 assetAvailabilityStatus:(long long)a2;
- (int)durationInSecondsFromStartTime:(double)a0 endTime:(double)a1;

@end
