@class NSString;

@interface CNFMLHandle : NSObject

@property (copy, nonatomic) NSString *identifier;

+ (id)handleWithIdentifier:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)comparisonIdentifier;

@end
