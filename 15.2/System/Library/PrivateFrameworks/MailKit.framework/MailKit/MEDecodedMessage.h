@class NSData, MEMessageSecurityInformation;

@interface MEDecodedMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *rawData;
@property (readonly, nonatomic) MEMessageSecurityInformation *securityInformation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 securityInformation:(id)a1;

@end
