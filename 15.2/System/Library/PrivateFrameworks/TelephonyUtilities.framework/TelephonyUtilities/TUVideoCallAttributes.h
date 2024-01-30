@interface TUVideoCallAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long remoteCameraOrientation;
@property (nonatomic) long long localVideoContextSlotIdentifier;
@property (nonatomic) long long remoteVideoContextSlotIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToVideoCallAttributes:(id)a0;

@end
