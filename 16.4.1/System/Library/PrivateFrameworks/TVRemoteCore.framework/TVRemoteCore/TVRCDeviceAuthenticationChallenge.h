@class NSString;

@interface TVRCDeviceAuthenticationChallenge : NSObject

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) long long challengeType;
@property (nonatomic) long long challengeAttributes;
@property (nonatomic) long long throttleSeconds;
@property (readonly, copy, nonatomic) NSString *codeToEnterOnDevice;

- (void)cancel;
- (void).cxx_destruct;
- (id)_initWithDeviceIdentifier:(id)a0 challengeType:(long long)a1 codeToEnterOnDevice:(id)a2;
- (void)userEnteredCodeLocally:(id)a0;

@end
