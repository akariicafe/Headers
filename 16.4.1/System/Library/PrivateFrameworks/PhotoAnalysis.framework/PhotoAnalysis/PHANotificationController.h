@class PHUserFeedbackCalculator, PGManager, NSObject;
@protocol OS_os_log;

@interface PHANotificationController : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    PGManager *_graphManager;
    PHUserFeedbackCalculator *_userFeedbackCalculator;
}

- (id)initWithGraphManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldFireNotificationForMemoriesWithScores:(id)a0 withCreationReason:(unsigned long long)a1;
- (id)_userFeedbackCalculatorWithPhotoLibrary:(id)a0;
- (id)bestDateForDeliveringNotification;
- (void)fireNotificationForMemoryIdentifiers:(id)a0 withCreationReason:(unsigned long long)a1;
- (void)fireNotificationForSuggestionIdentifiers:(id)a0;
- (id)initWithGraphManager:(id)a0 userFeedbackCalculator:(id)a1;
- (void)postNotificationForMemory:(id)a0 withCreationReason:(unsigned long long)a1 forceImmediateDelivery:(BOOL)a2;
- (void)postNotificationForSuggestion:(id)a0 deliveryDate:(id)a1;
- (BOOL)userFeedbackScoreIsAcceptableForAssetCollection:(id)a0 memoryFeatures:(id)a1 userFeedbackCalculator:(id)a2;
- (BOOL)userIsActivelyUsingPhotos;

@end
