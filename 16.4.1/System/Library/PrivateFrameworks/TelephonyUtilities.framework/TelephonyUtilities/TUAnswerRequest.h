@class NSString, IDSDestination, NSDate;

@interface TUAnswerRequest : NSObject <NSSecureCoding, TUCallRequest, TUVideoRequest>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *dateAnswered;
@property (nonatomic) BOOL allowBluetoothAnswerWithoutDowngrade;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) IDSDestination *endpointIDSDestination;
@property (retain, nonatomic) NSString *endpointRapportMediaSystemIdentifier;
@property (retain, nonatomic) NSString *endpointRapportEffectiveIdentifier;
@property (nonatomic) BOOL wantsHoldMusic;
@property (nonatomic) BOOL pauseVideoToStart;
@property (nonatomic) BOOL downgradeToAudio;
@property (nonatomic) long long behavior;
@property (copy, nonatomic) NSString *uniqueProxyIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGSize { double width; double height; } localLandscapeAspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } localPortraitAspectRatio;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCall:(id)a0;
- (id)initWithUniqueProxyIdentifier:(id)a0;

@end
