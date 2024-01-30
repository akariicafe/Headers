@class NSString;

@interface SUCoreConnectVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *selectorString;

- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
