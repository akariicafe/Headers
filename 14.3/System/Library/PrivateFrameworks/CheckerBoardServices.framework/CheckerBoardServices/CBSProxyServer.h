@class NSString, NSNumber;

@interface CBSProxyServer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *server;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSString *token;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServer:(id)a0 port:(id)a1 token:(id)a2;

@end
