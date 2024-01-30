@class NSArray;

@interface CVNLPDecodingLexicons : CVNLPInformationStream {
    NSArray *_sortedLexicons;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)packagedLexiconCursorsUsingTextDecodingContext:(id)a0;
- (id)packagedLexiconRootCursors;
- (id)initWithLexicons:(id)a0 decodingWeight:(id)a1 lowerBoundLogProbability:(id)a2;
- (id)initWithLexicons:(id)a0 decodingWeight:(id)a1;
- (void)enumerateLexiconsSortedByPriorityWithBlock:(id /* block */)a0;
- (id)initWithLexicons:(id)a0;
- (id)lexiconsForPriority:(unsigned long long)a0;

@end
