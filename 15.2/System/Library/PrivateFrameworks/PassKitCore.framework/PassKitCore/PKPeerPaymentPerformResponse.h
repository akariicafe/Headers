@class NSUUID;

@interface PKPeerPaymentPerformResponse : PKPeerPaymentStatusResponse

@property (readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithData:(id)a0 deviceScoreIdentifier:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
