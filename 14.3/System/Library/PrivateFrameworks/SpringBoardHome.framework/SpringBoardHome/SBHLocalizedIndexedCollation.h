@class NSArray, NSMutableOrderedSet, UILocalizedIndexedCollation, NSMutableArray;

@interface SBHLocalizedIndexedCollation : UILocalizedIndexedCollation {
    UILocalizedIndexedCollation *_referenceIndexedCollation;
    NSMutableOrderedSet *_appendedSections;
    NSMutableArray *_cachedSectionTitles;
    NSMutableArray *_cachedSectionIndexTitles;
}

@property (readonly, nonatomic) NSArray *appendedSectionTitles;

+ (id)dimSumCollation;
+ (id)defaultCollation;

- (BOOL)removeSection:(id)a0;
- (BOOL)containsSection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addSection:(id)a0;
- (id)sectionTitles;
- (BOOL)isEqual:(id)a0;
- (long long)sectionForObject:(id)a0 collationStringSelector:(SEL)a1;
- (id)sortedArrayFromArray:(id)a0 collationStringSelector:(SEL)a1;
- (id)sectionIndexTitles;

@end
