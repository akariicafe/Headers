@class NSNumber, NSData;

@interface SESAuthorizationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char state;
@property (retain, nonatomic) NSNumber *remainingCount;
@property (retain, nonatomic) NSNumber *remainingTime;
@property (retain, nonatomic) NSData *publicKeyIdentifier;
@property (retain, nonatomic) NSData *authorizationID;
@property (retain, nonatomic) NSData *anonymizedDSID;

+ (id)withState:(unsigned char)a0 remaningCount:(id)a1 remainingTime:(id)a2 publicKeyIdentifier:(id)a3 authorizationID:(id)a4 anonymizedDSID:(id)a5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
