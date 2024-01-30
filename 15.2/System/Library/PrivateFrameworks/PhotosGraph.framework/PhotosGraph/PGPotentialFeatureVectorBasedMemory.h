@class NSDictionary, NSSet, NSIndexSet;

@interface PGPotentialFeatureVectorBasedMemory : PGPotentialMemory

@property (retain) NSDictionary *matchingKeywords;
@property (retain) NSDictionary *referenceKeywords;
@property (retain) NSDictionary *momentKeywords;
@property (retain) NSSet *personNodes;
@property BOOL isBirthday;
@property (retain) NSIndexSet *sortedCriteria;
@property double matchingScore;
@property double contentScore;
@property double neighborScore;

- (void).cxx_destruct;

@end
