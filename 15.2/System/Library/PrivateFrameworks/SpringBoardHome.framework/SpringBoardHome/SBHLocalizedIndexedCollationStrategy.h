@class NSArray, NSString, UILocalizedIndexedCollation;

@interface SBHLocalizedIndexedCollationStrategy : NSObject <SBHLocalizedIndexedCollation> {
    NSArray *_cachedSectionTitles;
    NSArray *_cachedSectionIndexTitles;
    NSArray *_appendedSections;
    UILocalizedIndexedCollation *_currentCollation;
}

@property (readonly, nonatomic) NSArray *sectionTitles;
@property (readonly, nonatomic) NSArray *sectionIndexTitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prewarm;
+ (id)myCurrentCollation;
+ (id)defaultSectionTitles;
+ (id)defaultSectionIndexTitles;
+ (id)dimSumCollationStrategy;
+ (id)defaultCollationStrategy;

- (id)sortedArrayFromArray:(id)a0 collationStringSelector:(SEL)a1;
- (long long)sectionForObject:(id)a0 collationStringSelector:(SEL)a1;
- (long long)sectionForSectionIndexTitleAtIndex:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAdditionalSections:(id)a0;
- (id)appendedSectionTitles;
- (BOOL)containsSection:(id)a0;

@end
