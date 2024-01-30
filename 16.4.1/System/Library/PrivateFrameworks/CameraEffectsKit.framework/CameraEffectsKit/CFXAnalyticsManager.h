@class CFXPickerSession, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CFXAnalyticsManager : JFXAnalyticsManager {
    NSObject<OS_dispatch_queue> *_queryDataQueue;
}

@property (retain, nonatomic) NSMutableArray *analyticsDurationData_queryDataQueue;
@property (retain, nonatomic) CFXPickerSession *currentPickerSession;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isDistribution:(id)a0;
- (void)pickerDidScroll;
- (id)CFX_allowedPickerIdentifier:(id)a0;
- (id)CFX_composedAnalyticsKeyWithAnimoji:(BOOL)a0 video:(BOOL)a1 frontCamera:(BOOL)a2 effectType:(id)a3;
- (void)pickerDidChangePresentationMode;
- (void)addAnalyticsDurationData:(id)a0;
- (id)analyticsDurationData;
- (BOOL)checkIfEventExistsWithName:(id)a0;
- (id)dictionaryWithEventName:(id)a0 value:(double)a1;
- (void)didSelectEffectOfType:(id)a0 effectIsNone:(BOOL)a1;
- (BOOL)isIncrementScalar:(id)a0;
- (void)persistAnalyticsDataWithEventName:(id)a0 value:(double)a1;
- (void)removeAnalyticsDurationDataItems:(id)a0;
- (unsigned long long)roundWithNumber:(unsigned long long)a0;
- (void)startTrackingPickerWithIdentifier:(id)a0;
- (void)startTrackingTimeIntervalEventWithName:(id)a0;
- (void)stopTrackingPickerWithIdentifier:(id)a0;
- (void)stopTrackingTimeIntervalEventWithName:(id)a0;
- (void)trackAnimojiWithEffectId:(id)a0;
- (void)trackEffect:(id)a0;
- (void)trackEmojiStickerWithEffectId:(id)a0;
- (void)trackEventWithName:(id)a0;
- (void)trackEventWithName:(id)a0 count:(unsigned long long)a1;
- (void)trackEventWithName:(id)a0 duration:(double)a1;
- (void)trackEventWithName:(id)a0 supportsHDR:(BOOL)a1 isHDR:(BOOL)a2;
- (void)trackFilterWithEffectId:(id)a0;
- (void)trackKey:(id)a0 supportsHDR:(BOOL)a1 isHDR:(BOOL)a2;
- (void)trackKey:(id)a0 withDuration:(double)a1;
- (void)trackKey:(id)a0 withEffectId:(id)a1;
- (void)trackLabelWithEffectId:(id)a0;
- (void)trackMediaSentWithAnimoji:(BOOL)a0 video:(BOOL)a1 frontCamera:(BOOL)a2 filterCount:(unsigned long long)a3 labelCount:(unsigned long long)a4 messagesStickerCount:(unsigned long long)a5 shapeCount:(unsigned long long)a6 emojiStickerCount:(unsigned long long)a7 supportsHDR:(BOOL)a8 isHDR:(BOOL)a9;
- (void)trackMessagesStickerWithEffectId:(id)a0;
- (void)trackShapeWithEffectId:(id)a0;

@end
