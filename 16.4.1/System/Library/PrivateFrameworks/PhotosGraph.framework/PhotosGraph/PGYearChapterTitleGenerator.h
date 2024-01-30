@class NSString, MABinaryAdjacency;

@interface PGYearChapterTitleGenerator : NSObject <PGChapterTitleGeneratorProtocol> {
    MABinaryAdjacency *_momentNodesByChapterYearNode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)generateChapterTitles;
- (id)initWithMomentNodesByChapterYearNode:(id)a0 titleGenerationContext:(id)a1;

@end
