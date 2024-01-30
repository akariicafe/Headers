@class NSString;

@interface PGPetMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) NSString *seasonName;
@property (nonatomic) BOOL useAdventureTitle;
@property (nonatomic) BOOL usePetAndPersonTitle;
@property (nonatomic) unsigned long long petSpecies;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_petTypeString;

@end
