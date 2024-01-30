@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {
    unsigned long long _triggerCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consecutivePHSRejects;
    double _lastPHSReject;
    unsigned long long _consecutiveVTRejects;
    unsigned long long _firstPassTriggerCount;
    unsigned long long _consecutiveFalseFirstPassTriggersPerHour;
    NSObject<OS_dispatch_source> *_hourPowerTimer;
    NSMutableArray *_vtEstimationStatistics;
    NSMutableDictionary *_vtDailyMetadata;
    BOOL _vtEstimationStatisticsAreStale;
    BOOL _vtDailyMetadataIsStale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (int)_convertToFirstPassSource:(id)a0;
- (unsigned long long)getVTRejectCount;
- (unsigned long long)triggerCount;
- (double)getLastPHSRejectTime;
- (id)getVoiceTriggerDailyMetadata;
- (void)increaseTriggerCount;
- (void)clearTriggerCount;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)incrementVTRejectCount;
- (void)resetPHSRejectCount;
- (void)incrementPHSRejectCount;
- (unsigned long long)firstPassTriggerCount;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)resetVTEstimationStatistics;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (void)clearFalseFirstPassTriggersPerHour;
- (void)updateVTEstimationStatistics:(id)a0;
- (id)getVoiceTriggerStatistics;
- (id)init;
- (void)increaseFalseFirstPassTriggersPerHour;
- (unsigned long long)getPHSRejectCount;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)incrementFirstPassTriggerCount;
- (void)clearFirstPassTriggerCount;
- (void).cxx_destruct;

@end
