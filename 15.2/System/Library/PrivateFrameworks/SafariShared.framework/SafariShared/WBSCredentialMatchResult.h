@class NSArray;

@interface WBSCredentialMatchResult : NSObject

@property (readonly, copy, nonatomic) NSArray *exactMatches;
@property (readonly, copy, nonatomic) NSArray *potentialMatches;
@property (readonly, copy, nonatomic) NSArray *associatedDomainMatches;

- (void).cxx_destruct;
- (id)initWithExactMatches:(id)a0 potentialMatches:(id)a1 associatedDomainMatches:(id)a2;

@end
