@class NSString, NSURL;

@interface EKConference : EKObject

@property (retain, nonatomic) NSString *info;
@property (retain, nonatomic) NSURL *url;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;

- (id)urlString;
- (void)setUrlString:(id)a0;
- (id)description;
- (id)initWithInfo:(id)a0 url:(id)a1;

@end
