@class NSDictionary, NSIndexSet;

@interface PGCurationIndexSetTrait : PGCurationTrait

@property (retain, nonatomic) NSDictionary *thresholdByIdentifier;
@property (readonly, nonatomic) NSIndexSet *indexSet;
@property (nonatomic) unsigned long long targetNumberOfMatches;

- (void).cxx_destruct;
- (double)thresholdForSceneIdentifier:(unsigned int)a0;
- (id)initWithIndexSet:(id)a0;
- (BOOL)isActive;
- (id)debugDescription;
- (id)niceDescription;

@end
