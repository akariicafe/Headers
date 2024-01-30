@class NSData;

@interface NFTrustSignRequest : NFTrustObject

@property (retain, nonatomic) NSData *challenge;
@property (retain, nonatomic) NSData *data;

+ (BOOL)supportsSecureCoding;
+ (id)signRequestWithChallenge:(id)a0 data:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
