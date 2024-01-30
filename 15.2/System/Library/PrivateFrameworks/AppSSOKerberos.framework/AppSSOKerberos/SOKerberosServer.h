@class NSString;

@interface SOKerberosServer : NSObject

@property (readonly) NSString *host;
@property (readonly) NSString *protocol;
@property (readonly) NSString *port;
@property (readonly) NSString *path;

+ (id)serverWithString:(id)a0;

- (void).cxx_destruct;
- (id)initWithHost:(id)a0 port:(id)a1 protocol:(id)a2 path:(id)a3;

@end
