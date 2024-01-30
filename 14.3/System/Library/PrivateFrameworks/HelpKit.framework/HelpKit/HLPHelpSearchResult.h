@class NSString;

@interface HLPHelpSearchResult : NSObject

@property (nonatomic) double relevanceScore;
@property (nonatomic) long long weight;
@property (nonatomic) long long matchCount;
@property (retain, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
