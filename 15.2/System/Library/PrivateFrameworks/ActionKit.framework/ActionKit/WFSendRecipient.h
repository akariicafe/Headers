@class NSString;

@interface WFSendRecipient : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;
@property (readonly, nonatomic) long long contactType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 address:(id)a1;
- (id)recipientContentItem;

@end
