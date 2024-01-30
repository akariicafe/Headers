@interface VCMediaNegotiatorResultsFaceTimeSettings : NSObject {
    unsigned char mediaControlInfoFECFeedbackVersion;
}

@property (nonatomic) BOOL SIPDisabled;
@property (nonatomic) BOOL secureMessagingRequired;
@property (nonatomic) BOOL remoteFaceTimeSwitchesAvailable;
@property (nonatomic) unsigned int faceTimeSwitches;
@property (nonatomic) BOOL oneToOneModeSupported;
@property (nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;
@property (nonatomic) unsigned char remoteLinkProbingCapabilityVersion;

@end
