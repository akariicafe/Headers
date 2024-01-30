@class NSString;

@interface RTEventLocationIdentifier : NSObject <NSCopying>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *calendarIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)normalize;
- (long long)levenshteinDistanceToIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 source:(unsigned long long)a1 calendarIdentifier:(id)a2;
- (BOOL)isSuitableForFuzzyMatch;
- (id)initWithEvent:(id)a0 source:(unsigned long long)a1 useCalendarIdentifier:(BOOL)a2;

@end
