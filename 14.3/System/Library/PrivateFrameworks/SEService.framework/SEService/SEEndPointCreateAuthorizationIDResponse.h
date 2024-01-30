@class NSData, NSNumber;

@interface SEEndPointCreateAuthorizationIDResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *authorizationID;
@property (retain, nonatomic) NSNumber *authorizationInterval;
@property (retain, nonatomic) NSNumber *authorizationCount;

+ (id)withAuthorizationID:(id)a0 authorizationInterval:(double)a1 authorizationCount:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
