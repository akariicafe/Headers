@class PKPaymentRequest, NSString, PKRemoteDevice;

@interface PKRemotePaymentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKRemoteDevice *device;
@property (retain, nonatomic) PKPaymentRequest *paymentRequest;
@property (copy, nonatomic) NSString *selectedApplicationIdentifier;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToRemoteRequest:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDevice:(id)a0 identifier:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
