@class NSMutableDictionary, AFSettingsConnection, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AFArbitrationParticipationController : NSObject <AFArbitrationEventUpdatesDelegate>

@property (retain, nonatomic) AFSettingsConnection *settingsConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *participationsForUserFeedback;
@property (retain, nonatomic) NSMutableArray *participationsPublished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_publishFeedbackArbitrationRecord;
- (void)_publishFeedbackArbitrationRecordForNearMiss;
- (void)_resetSettingsConnection;
- (void)_updateUserFeedbackParticipationAllAdvertisements:(id)a0 session:(id)a1 ownRecord:(id)a2 won:(BOOL)a3 triggerType:(id)a4 lastActivationTime:(double)a5 requestStartDate:(id)a6 voiceTriggerDate:(id)a7 scoreBoosters:(id)a8 deviceClass:(unsigned char)a9;
- (void)arbitrationDidUpdateWithContext:(id)a0 session:(id)a1;
- (void)arbitrationEndedAdvertising:(id)a0;
- (void)arbitrationEndedTask:(id)a0;
- (void)arbitrationSessionWillStart:(id)a0;
- (void)requestWillPresentUsefulUserResult:(id)a0;

@end
