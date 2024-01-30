@interface PGMeaningfulEventTrait : NSObject

@property (nonatomic) double minimumScore;
@property (readonly, nonatomic) BOOL isMatchingRequired;
@property (readonly, nonatomic) BOOL isActive;

- (BOOL)isActive;
- (id)init;
- (id)debugDescription;
- (BOOL)isMatchingRequired;
- (id)debugDescriptionWithMomentNode:(id)a0;

@end
