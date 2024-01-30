@class NSString;

@interface SiriInvocationAnalytics.IntraTurnFeatureKeys : NSObject

@property (class, nonatomic, readonly) NSString *ASR_BEST_POST_ITN_UTTERANCE_KEY;
@property (class, nonatomic, readonly) NSString *ASR_BEST_PHONETIC_SEQUENCE_KEY;
@property (class, nonatomic, readonly) NSString *FLOW_STATE_TYPE_SEQUENCE_KEY;
@property (class, nonatomic, readonly) NSString *FLOW_TASK_NAME_SEQUENCE_KEY;
@property (class, nonatomic, readonly) NSString *FLOW_STATUS_REASON_SEQUENCE_KEY;
@property (class, nonatomic, readonly) NSString *FLOW_FINAL_FLOW_TASK_NAME_KEY;
@property (class, nonatomic, readonly) NSString *FLOW_FINAL_FLOW_STATE_TYPE_KEY;
@property (class, nonatomic, readonly) NSString *FLOW_FINAL_FLOW_STATUS_REASON_KEY;
@property (class, nonatomic, readonly) NSString *UEI_CAT_ID_KEY;
@property (class, nonatomic, readonly) NSString *UEI_CAT_ID_SEQUENCE_KEY;
@property (class, nonatomic, readonly) NSString *UEI_SPEAKEASY_CATEGORY_KEY;
@property (class, nonatomic, readonly) NSString *UEI_DISMISSAL_REASON_KEY;
@property (class, nonatomic, readonly) NSString *UEI_INVOCATION_SOURCE_KEY;
@property (class, nonatomic, readonly) NSString *UEI_INVOCATION_SOURCE_ID_KEY;
@property (class, nonatomic, readonly) NSString *ORCH_REQUEST_ID_KEY;
@property (class, nonatomic, readonly) NSString *DIM_TIMESTAMP_KEY;
@property (class, nonatomic, readonly) NSString *DIM_DEVICE_TYPE_KEY;
@property (class, nonatomic, readonly) NSString *DIM_OPT_IN_STATUS_KEY;
@property (class, nonatomic, readonly) NSString *DIM_SIRI_INPUT_LOCALE_KEY;
@property (class, nonatomic, readonly) NSString *DIM_SYSTEM_BUILD_KEY;
@property (class, nonatomic, readonly) NSString *VALID_TURN_KEY;
@property (class, nonatomic, readonly) NSString *VALID_TURN_CONTAINS_UUFR_SAID;
@property (class, nonatomic, readonly) NSString *VALID_TURN_CONTAINS_UUFR_SHOWN;
@property (class, nonatomic, readonly) NSString *VALID_TURN_CONTAINS_UUFR_PRESENTED;
@property (class, nonatomic, readonly) NSString *VALID_TURN_CONTAINS_ORCH_ENDED;
@property (class, nonatomic, readonly) NSString *VALID_TURN_ORCH_CANCELLATION_REASON;
@property (class, nonatomic, readonly) NSString *VALID_TURN_CONTAINS_ORCH_CANCELLED;
@property (class, nonatomic, readonly) NSString *VALID_TURN_CONTAINS_ORCH_FAILED;
@property (class, nonatomic, readonly) NSString *VALID_TURN_CONTAINS_ASR_CANCELLED;
@property (class, nonatomic, readonly) NSString *VALID_TURN_CONTAINS_ASR_FAILED;
@property (class, nonatomic, readonly) NSString *SIRI_MH_URES_MITIGATOR_THRESHOLD;
@property (class, nonatomic, readonly) NSString *SIRI_MH_URES_MITIGATOR_SCORE;

- (id)init;
- (void).cxx_destruct;

@end
