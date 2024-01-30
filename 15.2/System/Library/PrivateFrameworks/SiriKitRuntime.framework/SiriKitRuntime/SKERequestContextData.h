@class NSString;

@interface SKERequestContextData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ inputOrigin;
    void /* unknown type, empty encoding */ audioSource;
    void /* unknown type, empty encoding */ audioDestination;
    void /* unknown type, empty encoding */ isEyesFree;
    void /* unknown type, empty encoding */ isDirectAction;
    void /* unknown type, empty encoding */ isVoiceTriggerEnabled;
    void /* unknown type, empty encoding */ isTextToSpeechEnabled;
    void /* unknown type, empty encoding */ peerInfo;
    void /* unknown type, empty encoding */ endpointInfo;
    void /* unknown type, empty encoding */ instanceInfo;
    void /* unknown type, empty encoding */ bargeInModes;
    void /* unknown type, empty encoding */ approximatePreviousTTSInterval;
    void /* unknown type, empty encoding */ restrictions;
    void /* unknown type, empty encoding */ originatingHome;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
