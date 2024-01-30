@class NSString;

@interface PDSRegistration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *topicString;
@property (readonly, nonatomic) NSString *qualifierString;
@property (readonly, nonatomic) char pushEnvironment;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTopic:(id)a0 qualifier:(id)a1 pushEnvironment:(char)a2;
- (BOOL)isEqualToRegistration:(id)a0;

@end
