@class NSUUID, NSString, CXHandle, NSDate;

@interface CXStartCallAction : CXCallAction <CXVideoAspectRatioDescriptor>

@property (copy, nonatomic) NSDate *dateStarted;
@property (nonatomic, getter=isRelay) BOOL relay;
@property (nonatomic, getter=isUpgrade) BOOL upgrade;
@property (nonatomic, getter=isRetry) BOOL retry;
@property (nonatomic, getter=isEmergency) BOOL emergency;
@property (nonatomic, getter=isVoicemail) BOOL voicemail;
@property (nonatomic, setter=setTTYType:) long long ttyType;
@property (retain, nonatomic) NSUUID *localSenderIdentityUUID;
@property (nonatomic) BOOL shouldSuppressInCallUI;
@property (copy, nonatomic) CXHandle *handle;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic, getter=isVideo) BOOL video;
@property (nonatomic) struct CGSize { double width; double height; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } localPortraitAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (double)timeout;

- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)fulfill;
- (void)fulfillWithDateStarted:(id)a0;
- (id)initWithCallUUID:(id)a0 handle:(id)a1;
- (BOOL)shouldTimeout;
- (void)updateAsFulfilledWithDateStarted:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
