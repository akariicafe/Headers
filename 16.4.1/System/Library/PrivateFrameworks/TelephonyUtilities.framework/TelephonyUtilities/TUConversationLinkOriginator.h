@class NSString, TUHandle;

@interface TUConversationLinkOriginator : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) TUHandle *handle;
@property (nonatomic) long long revision;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 revision:(long long)a1 handle:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToConversationLinkOriginator:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
