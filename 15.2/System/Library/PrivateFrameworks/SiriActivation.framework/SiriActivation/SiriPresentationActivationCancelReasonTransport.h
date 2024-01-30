@class NSNumber;

@interface SiriPresentationActivationCancelReasonTransport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *transport;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)cancelReason;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSiriPresentationActivationCancelReason:(unsigned long long)a0;

@end
