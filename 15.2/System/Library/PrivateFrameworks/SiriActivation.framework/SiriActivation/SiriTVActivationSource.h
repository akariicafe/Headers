@class SiriLongPressButtonContext, NSString;

@interface SiriTVActivationSource : SiriLongPressButtonSource

@property (nonatomic) double longPressInterval;
@property (retain, nonatomic) SiriLongPressButtonContext *context;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) unsigned long long remoteType;

+ (id)activationSourceForIdentifier:(long long)a0;

- (id)_deviceIdentifier;
- (void).cxx_destruct;

@end
