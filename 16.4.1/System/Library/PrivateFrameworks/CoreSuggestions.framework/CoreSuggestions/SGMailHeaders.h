@class NSString, NSArray;

@interface SGMailHeaders : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSArray *from;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMessageId:(id)a0;

@end
