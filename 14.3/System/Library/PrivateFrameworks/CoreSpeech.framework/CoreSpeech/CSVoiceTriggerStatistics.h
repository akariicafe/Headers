@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {
    unsigned long long _triggerCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consecutivePHSRejects;
    double _lastPHSReject;
    unsigned long long _consecutiveVTRejects;
    unsigned long long _firstPassTriggerCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)incrementVTRejectCount;
- (void)incrementPHSRejectCount;
- (unsigned long long)getPHSRejectCount;
- (unsigned long long)getVTRejectCount;
- (void)voiceTriggerDidRejected:(id)a0;
- (void)clearFirstPassTriggerCount;
- (void)resetPHSRejectCount;
- (unsigned long long)firstPassTriggerCount;
- (void)incrementFirstPassTriggerCount;
- (void)voiceTriggerDidDetectNearMiss:(id)a0;
- (void)increaseTriggerCount;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (double)getLastPHSRejectTime;
- (void)clearTriggerCount;
- (unsigned long long)triggerCount;

@end
