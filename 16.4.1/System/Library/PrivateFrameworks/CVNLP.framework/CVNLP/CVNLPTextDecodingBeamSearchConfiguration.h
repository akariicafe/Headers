@interface CVNLPTextDecodingBeamSearchConfiguration : CVNLPTextDecodingConfiguration

@property (nonatomic) unsigned long long beamWidth;
@property (nonatomic) unsigned long long pathCount;
@property (nonatomic) BOOL shouldOptimizeAlignment;
@property (nonatomic) BOOL pruneProblematicMixedScriptWordPaths;
@property (nonatomic) BOOL shouldApplyWordLMToLastWord;
@property (readonly, nonatomic) id /* block */ scoringFunction;

- (id)initWithCommitActionBehavior:(id /* block */)a0 beamWidth:(unsigned long long)a1 pathCount:(unsigned long long)a2 shouldOptimizeAlignment:(BOOL)a3;
- (id)initWithCommitActionBehavior:(id /* block */)a0 beamWidth:(unsigned long long)a1 pathCount:(unsigned long long)a2 shouldOptimizeAlignment:(BOOL)a3 pruneProblematicMixedScriptWordPaths:(BOOL)a4;
- (id)initWithCommitActionBehavior:(id /* block */)a0 scoringFunction:(id /* block */)a1 beamWidth:(unsigned long long)a2 pathCount:(unsigned long long)a3;
- (id)initWithCommitActionBehavior:(id /* block */)a0 scoringFunction:(id /* block */)a1 beamWidth:(unsigned long long)a2 pathCount:(unsigned long long)a3 shouldOptimizeAlignment:(BOOL)a4;
- (id)initWithCommitActionBehavior:(id /* block */)a0 scoringFunction:(id /* block */)a1 beamWidth:(unsigned long long)a2 pathCount:(unsigned long long)a3 shouldOptimizeAlignment:(BOOL)a4 pruneProblematicMixedScriptWordPaths:(BOOL)a5;
- (id)initWithCommitActionBehavior:(id /* block */)a0 scoringFunction:(id /* block */)a1 beamWidth:(unsigned long long)a2 pathCount:(unsigned long long)a3 shouldOptimizeAlignment:(BOOL)a4 pruneProblematicMixedScriptWordPaths:(BOOL)a5 shouldApplyWordLMToLastWord:(BOOL)a6;

@end
