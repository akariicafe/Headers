@protocol NSSecureCoding;

@interface SGXPCResponse1 : SGXPCResponse

@property (readonly, nonatomic) id<NSSecureCoding> response1;

+ (BOOL)supportsSecureCoding;
+ (id)responseWith:(id)a0;
+ (id)responseWithError:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setResponse1:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
