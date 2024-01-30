@class NSString;

@interface VTUIAnalytics : NSObject

@property (nonatomic) int introViewShown;
@property (nonatomic) int aboutViewShown;
@property (nonatomic) int skippedFromIntroAOP;
@property (nonatomic) int skippedFromIntroNonAOP;
@property (nonatomic) int turnOnSiriNonAOP;
@property (nonatomic) int voiceTrainingCancelled;
@property (nonatomic) int voiceTrainingCancelledStep;
@property (nonatomic) int voiceTrainingCompleted;
@property (nonatomic) int voiceTrainingStarted;
@property (nonatomic) int asrError;
@property (nonatomic) int vtError;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSString *setupMode;

- (void).cxx_destruct;
- (void)logEvent;

@end
