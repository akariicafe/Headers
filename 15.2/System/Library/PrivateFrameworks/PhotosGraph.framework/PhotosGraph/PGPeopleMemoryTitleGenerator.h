@class NSSet, NSString, PGTimeTitleOptions;

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator {
    NSString *_seasonName;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSSet *personNodes;
@property (readonly, nonatomic) PGTimeTitleOptions *timeTitleOptions;

+ (id)peopleOverTimeTimeTitleOptionsWithMomentNodes:(id)a0;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 personNodes:(id)a1 type:(unsigned long long)a2 titleGenerationContext:(id)a3;
- (id)initWithMomentNodes:(id)a0 personNodes:(id)a1 timeTitleOptions:(id)a2 type:(unsigned long long)a3 titleGenerationContext:(id)a4;
- (id)initWithMomentNodes:(id)a0 personNodes:(id)a1 seasonName:(id)a2 type:(unsigned long long)a3 titleGenerationContext:(id)a4;
- (id)_titleForPeople;
- (id)_titleForSocialGroup;
- (id)_titleForChildAndPerson;
- (id)_titleForEarlyMoments;
- (id)_timeTitleForEarlyMoments;
- (BOOL)_person:(id)a0 isPresentInAnyMomentOfMomentNodes:(id)a1;
- (id)_birthdayTitleForPeople;
- (id)_timeTitleForPeople;
- (BOOL)_useSplitTimeTitlesIfNeeded;

@end
