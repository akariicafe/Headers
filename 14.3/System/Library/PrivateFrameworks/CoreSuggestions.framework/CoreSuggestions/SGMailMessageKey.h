@class NSString;

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *messageId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSource:(id)a0 messageId:(id)a1;
- (BOOL)isEqualToMailMessageKey:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
