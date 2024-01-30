@class NSString;

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSString *messageId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSource:(id)a0 messageId:(id)a1;
- (BOOL)isEqualToMailMessageKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
