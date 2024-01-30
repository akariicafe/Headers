@class NSString, NSNumber;

@interface MCDomainsCacheEntry : NSObject

@property (nonatomic) BOOL subdomainsMatch;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *port;

+ (id)normalizedPatternString:(id)a0;

- (id)description;
- (BOOL)matchesURL:(id)a0;
- (id)initWithPattern:(id)a0;
- (void).cxx_destruct;

@end
