@class NSSet;

@interface CVNLPDecodingLexicons : CVNLPInformationStream

@property (readonly, nonatomic) NSSet *lexicons;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)packagedLexiconRootCursors;
- (id)initWithLexicons:(id)a0 decodingWeight:(id)a1 lowerBoundLogProbability:(id)a2;
- (id)initWithLexicons:(id)a0 decodingWeight:(id)a1;
- (id)initWithLexicons:(id)a0;
- (id)lexiconsForPriority:(unsigned long long)a0;
- (id)packagedLexiconCursorsUsingTextDecodingContext:(id)a0;

@end
