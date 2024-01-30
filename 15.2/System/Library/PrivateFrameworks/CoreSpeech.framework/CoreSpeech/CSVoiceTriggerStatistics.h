@class NSString, NSObject;
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
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (double)getLastPHSRejectTime;
- (void)incrementPHSRejectCount;
- (void)increaseFalseFirstPassTriggersPerHour;
- (unsigned long long)getPHSRejectCount;
- (void)incrementVTRejectCount;
- (void)resetPHSRejectCount;
- (unsigned long long)firstPassTriggerCount;
- (void)clearFalseFirstPassTriggersPerHour;
- (void)clearTriggerCount;
- (void).cxx_destruct;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (id)init;
- (unsigned long long)getVTRejectCount;
- (void)incrementFirstPassTriggerCount;
- (void)increaseTriggerCount;
- (unsigned long long)triggerCount;
- (void)clearFirstPassTriggerCount;

@end
