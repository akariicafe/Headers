@class NSDictionary, _DPBitValueRecorder;

@interface ENDifferentialPrivacyManager : NSObject {
    _DPBitValueRecorder *_userRiskRecorder;
    _DPBitValueRecorder *_userRiskParametersRecorder;
    _DPBitValueRecorder *_userBeaconCountRecorder;
    _DPBitValueRecorder *_userNotificationRecorder;
    _DPBitValueRecorder *_userNotificationInteractionRecorder;
}

@property (readonly, copy, nonatomic) NSDictionary *metadata;

+ (id)hashForServerExposureConfiguration:(id)a0;
+ (unsigned short)userRiskScoreForExposureDetectionSummary:(id)a0;

- (void).cxx_destruct;
- (void)reportUserExposureNotificationTapped:(BOOL)a0 classificationIndex:(unsigned char)a1;
- (void)updatedServerConfiguration:(id)a0 serverExposureConfiguration:(id)a1;
- (id)initWithServerConfiguration:(id)a0 serverExposureConfiguration:(id)a1;
- (void)reportUserRiskScoreWithSummary:(id)a0;
- (void)reportUserRiskParameters:(id)a0;
- (void)reportUserBeaconCount:(id)a0;
- (void)reportUserExposureNotificationWithClassificationIndex:(unsigned char)a0;
- (void)_submitValue:(id)a0 toRecorder:(id)a1 description:(const char *)a2;

@end
