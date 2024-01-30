@interface SiriRequestDispatcher.RequestContextMessage : SiriRequestDispatcher.RequestMessageBase {
    void /* unknown type, empty encoding */ audioSource;
    void /* unknown type, empty encoding */ audioDestination;
    void /* unknown type, empty encoding */ isEyesFree;
    void /* unknown type, empty encoding */ isVoiceTriggerEnabled;
    void /* unknown type, empty encoding */ isTextToSpeechEnabled;
    void /* unknown type, empty encoding */ isTriggerlessFollowup;
    void /* unknown type, empty encoding */ bargeInModes;
    void /* unknown type, empty encoding */ approximatePreviousTTSInterval;
    void /* unknown type, empty encoding */ deviceRestrictions;
}

- (void).cxx_destruct;

@end
