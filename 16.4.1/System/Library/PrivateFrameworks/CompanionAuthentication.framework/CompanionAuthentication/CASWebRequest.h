@class NSString, NSURL;

@interface CASWebRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *callbackScheme;
@property (readonly, nonatomic) NSURL *URL;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 callbackScheme:(id)a1;

@end
