@class NSString;

@interface HLPHelpSearchResult : NSObject

@property (nonatomic) double relevanceScore;
@property (nonatomic) long long weight;
@property (nonatomic) long long matchCount;
@property (retain, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;

@end
