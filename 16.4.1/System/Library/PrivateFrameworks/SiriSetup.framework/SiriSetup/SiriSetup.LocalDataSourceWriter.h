@class NSString;

@interface SiriSetup.LocalDataSourceWriter : NSObject {
    void /* unknown type, empty encoding */ siriEnabled;
    void /* unknown type, empty encoding */ siriVoice;
    void /* unknown type, empty encoding */ voiceTriggerEnabled;
    void /* unknown type, empty encoding */ voiceTriggerDuringPhoneCallEnabled;
    void /* unknown type, empty encoding */ siriDataSharingStatus;
    void /* unknown type, empty encoding */ setupDismissed;
    void /* unknown type, empty encoding */ id;
}

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
