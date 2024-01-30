@interface PGMeaningfulEventTrait : NSObject

@property (nonatomic) double minimumScore;
@property (readonly, nonatomic) BOOL isMatchingRequired;
@property (readonly, nonatomic) BOOL isActive;

- (id)init;
- (BOOL)isActive;
- (id)debugDescriptionWithMomentNode:(id)a0;
- (id)debugDescription;
- (BOOL)isMatchingRequired;

@end
