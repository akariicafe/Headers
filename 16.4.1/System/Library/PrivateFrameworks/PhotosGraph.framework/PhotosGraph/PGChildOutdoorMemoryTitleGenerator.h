@class PGGraphPersonNode;

@interface PGChildOutdoorMemoryTitleGenerator : PGTitleGenerator {
    PGGraphPersonNode *_personNode;
}

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithMomentNodes:(id)a0 personNode:(id)a1 type:(long long)a2 titleGenerationContext:(id)a3;

@end
