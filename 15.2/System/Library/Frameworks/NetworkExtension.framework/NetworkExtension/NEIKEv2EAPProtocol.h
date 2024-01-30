@class NSDictionary;

@interface NEIKEv2EAPProtocol : NSObject <NSCopying>

@property (readonly) unsigned int type;
@property (readonly) BOOL isUserNamePassword;
@property (readonly) BOOL isCertificate;
@property unsigned long long method;
@property (retain) NSDictionary *properties;

- (id)description;
- (id)initWithMethod:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
