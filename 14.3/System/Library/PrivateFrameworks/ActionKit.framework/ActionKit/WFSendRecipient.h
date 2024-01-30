@class NSString;

@interface WFSendRecipient : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;
@property (readonly, nonatomic) long long contactType;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 address:(id)a1;
- (id)recipientContentItem;

@end
