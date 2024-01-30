@class NSArray;

@interface EMFQueryResultOverride : NSObject

@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) unsigned long long overrideSearchType;
@property (readonly, nonatomic) unsigned long long overrideBehavior;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOverridesArray:(id)a0 searchType:(unsigned long long)a1 behavior:(unsigned long long)a2;

@end
