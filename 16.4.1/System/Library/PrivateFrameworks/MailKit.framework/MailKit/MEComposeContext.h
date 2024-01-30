@class NSUUID, MEMessage;

@interface MEComposeContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MEMessage *originalMessage;
@property (retain, nonatomic) NSUUID *contextID;
@property (nonatomic) long long action;
@property (nonatomic) BOOL isEncrypted;
@property (nonatomic) BOOL isSigned;
@property (nonatomic) BOOL shouldEncrypt;
@property (nonatomic) BOOL shouldSign;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAction:(long long)a0 originalMessage:(id)a1 shouldSign:(BOOL)a2 isSigned:(BOOL)a3 shouldEncrypt:(BOOL)a4 isEncrypted:(BOOL)a5;

@end
