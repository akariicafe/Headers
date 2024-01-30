@class NSSet;

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSSet *personNodes;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 personNodes:(id)a1 type:(unsigned long long)a2;
- (id)_titleForPeople;
- (id)_titleForSocialGroup;
- (id)_titleForEarlyMoments;
- (id)_timeTitleForEarlyMoments;
- (BOOL)_person:(id)a0 isPresentInAnyMomentOfMomentNodes:(id)a1;
- (id)_birthdayTitleForPeople;
- (id)_timeTitleForPeople;
- (BOOL)_useSplitTimeTitlesIfNeeded;

@end
