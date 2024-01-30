@class NSArray;

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (nonatomic) long long pseudoId;
@property (copy, nonatomic) NSArray *matches;

- (id)initWithPseudoId:(long long)a0 matches:(id)a1;

@end
