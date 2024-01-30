@class NSString;

@interface CoreIDVShared.IdentityLivenessConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ gestureSequence;
    void /* unknown type, empty encoding */ minRequiredGestureCount;
    void /* unknown type, empty encoding */ timeToSkipOption;
    void /* unknown type, empty encoding */ timeToSkipAccessible;
    void /* unknown type, empty encoding */ timeToAlert;
    void /* unknown type, empty encoding */ timeToAlertAccessible;
    void /* unknown type, empty encoding */ maxRetakeCount;
    void /* unknown type, empty encoding */ sessionTimeout;
    void /* unknown type, empty encoding */ faceOutOfBoundFrames;
    void /* unknown type, empty encoding */ gestureCompletionDelay;
    void /* unknown type, empty encoding */ tutorialVideoDelay;
    void /* unknown type, empty encoding */ tutorialVideoDuration;
    void /* unknown type, empty encoding */ gestureDetectedSuccessDuration;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
