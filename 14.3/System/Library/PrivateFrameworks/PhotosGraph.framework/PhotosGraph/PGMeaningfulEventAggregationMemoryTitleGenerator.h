@class NSSet;

@interface PGMeaningfulEventAggregationMemoryTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) unsigned long long meaning;
@property (readonly, nonatomic) NSSet *features;
@property (readonly, nonatomic) NSSet *meaningfulEvents;

+ (id)_momentNodesFromMeaningfulEvents:(id)a0;

- (void).cxx_destruct;
- (id)_subtitle;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_meaningLabelForTitle;
- (id)initWithMeaning:(unsigned long long)a0 features:(id)a1 meaningfulEvents:(id)a2;
- (id)_meaningLabelForNotReliableTitle;

@end
