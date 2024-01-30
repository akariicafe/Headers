@class NSURL, NSString;

@interface REElementOpenAction : REElementAction

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *applicationID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_performWithContext:(id)a0;
- (id)initWithURL:(id)a0 applicationID:(id)a1;

@end
