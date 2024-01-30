@protocol NSSecureCoding;

@interface SGXPCResponse2 : SGXPCResponse1

@property (readonly, nonatomic) id<NSSecureCoding> response2;

+ (BOOL)supportsSecureCoding;
+ (id)responseWith:(id)a0 also:(id)a1;
+ (id)responseWithError:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)response1;
- (id)initWithCoder:(id)a0;
- (void)setResponse2:(id)a0;

@end
