@class NSNumber, CTCATransmissionProgress;

@interface CTCAConnectionState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long connectionStatus;
@property (nonatomic) long long syncStatus;
@property (nonatomic) long long registrationStatus;
@property (nonatomic) long long congestionStatus;
@property (retain, nonatomic) NSNumber *rssi;
@property (retain, nonatomic) CTCATransmissionProgress *currentTransmissionProgress;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
