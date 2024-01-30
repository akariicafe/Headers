@class NSData, NSURL, NSError;

@interface PKAMPCardRegistrationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *cardData;
@property (retain) NSURL *brokerURL;
@property (retain) NSURL *paymentServicesURL;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)initWithCardData:(id)a0 brokerURL:(id)a1 paymentServicesURL:(id)a2 error:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
