@class NSString;

@interface VSScriptSecurityOrigin : NSObject

@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) long long port;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
