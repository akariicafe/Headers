@class NSString;

@interface EMListUnsubscribeCommandMessageHeaders : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *firstRecipient;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *firstSenderAddress;
@property (readonly, nonatomic) NSString *listID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHeaders:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
