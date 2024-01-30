@class NSString, NSNumber;

@interface CBSProxyServer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *server;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSString *token;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0 port:(id)a1 token:(id)a2;

@end
