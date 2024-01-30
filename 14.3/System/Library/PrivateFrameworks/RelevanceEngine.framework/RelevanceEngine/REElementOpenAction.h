@class NSURL, NSString;

@interface REElementOpenAction : REElementAction

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *applicationID;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_performWithContext:(id)a0;
- (id)initWithURL:(id)a0 applicationID:(id)a1;

@end
