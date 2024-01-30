@class NSNumber;

@interface SiriPresentationActivationCancelReasonTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *transport;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (unsigned long long)cancelReason;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSiriPresentationActivationCancelReason:(unsigned long long)a0;

@end
