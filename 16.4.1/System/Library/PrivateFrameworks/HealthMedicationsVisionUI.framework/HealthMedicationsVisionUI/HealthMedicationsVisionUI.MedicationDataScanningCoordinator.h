@interface HealthMedicationsVisionUI.MedicationDataScanningCoordinator : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ scanner;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ searchEngine;
    void /* unknown type, empty encoding */ resolutionEngine;
    void /* unknown type, empty encoding */ ndcParser;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ pulseTimer;
    void /* unknown type, empty encoding */ cameraStartTime;
    void /* unknown type, empty encoding */ targetSessionEndTime;
    void /* unknown type, empty encoding */ sessionStartTime;
    void /* unknown type, empty encoding */ lastUpdateTime;
    void /* unknown type, empty encoding */ processingTranscript;
    void /* unknown type, empty encoding */ transcriptsQueue;
    void /* unknown type, empty encoding */ allTranscripts;
    void /* unknown type, empty encoding */ seenTranscripts;
    void /* unknown type, empty encoding */ seenMRCs;
    void /* unknown type, empty encoding */ unsupportedMRCs;
    void /* unknown type, empty encoding */ mrcSubject;
    void /* unknown type, empty encoding */ mrcPendingSince;
    void /* unknown type, empty encoding */ mrcResults;
    void /* unknown type, empty encoding */ usedNgrams;
    void /* unknown type, empty encoding */ aggregatedResolutionResults;
    void /* unknown type, empty encoding */ resolutionCounter;
    void /* unknown type, empty encoding */ dataSaturated;
    void /* unknown type, empty encoding */ screenshots;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ sessionId;
}

- (void)pulseTimerFiredWithTimer:(id)a0;

@end
