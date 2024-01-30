@class NSURL;

@interface PKApplicationMessageActionURL : PKApplicationMessageAction <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;

+ (id)createWithSensitiveURL:(id)a0;
+ (id)createWithURL:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
