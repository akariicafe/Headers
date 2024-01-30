@class NSDictionary, NSIndexSet;

@interface PGCurationIndexSetTrait : PGCurationTrait

@property (retain, nonatomic) NSDictionary *thresholdByIdentifier;
@property (readonly, nonatomic) NSIndexSet *indexSet;
@property (nonatomic) unsigned long long targetNumberOfMatches;

- (BOOL)isActive;
- (void).cxx_destruct;
- (id)initWithIndexSet:(id)a0;
- (id)debugDescription;
- (id)niceDescription;
- (double)thresholdForSceneIdentifier:(unsigned int)a0;

@end
