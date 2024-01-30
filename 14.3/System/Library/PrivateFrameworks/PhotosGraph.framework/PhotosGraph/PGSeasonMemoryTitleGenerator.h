@class NSString;

@interface PGSeasonMemoryTitleGenerator : PGTitleGenerator

@property (retain, nonatomic) NSString *season;
@property (nonatomic) unsigned long long category;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 seasonName:(id)a1 category:(unsigned long long)a2;

@end
