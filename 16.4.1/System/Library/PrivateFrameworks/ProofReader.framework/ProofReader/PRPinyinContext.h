@class NSMutableArray;

@interface PRPinyinContext : PRAutocorrectionContext {
    NSMutableArray *_modifications;
    NSMutableArray *_addedModifications;
    NSMutableArray *_removedModifications;
    NSMutableArray *_addedRemovedModifications;
    NSMutableArray *_prefixes;
    NSMutableArray *_guesses;
    NSMutableArray *_completions;
    NSMutableArray *_corrections;
    char *_buffer;
    char *_altBuffer;
    char *_altBufferScores;
    NSMutableArray *_geometryDataArray;
    unsigned long long *_syllableLengthArray;
    void *_connection;
    unsigned long long _length;
    unsigned long long _lengthBeforeApostrophes;
    unsigned long long _startingPoint;
    unsigned long long _lastIndexes[4];
    unsigned long long _nextIndexes[2];
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    unsigned long long _abbreviatedSyllableCount;
    unsigned long long _previouslyAnalyzedLength;
    double _validSequenceCorrectionThreshold;
    int _romanization;
    BOOL _lastSyllableIsPartial;
}

- (void)dealloc;
- (id)init;
- (id)description;
- (void)reset;
- (id)completions;
- (id)correction;
- (int)romanization;
- (id)prefixes;
- (id)guesses;
- (BOOL)_addEnglishWordForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 quickly:(BOOL)a1;
- (void)_addEnglishWordsQuickly:(BOOL)a0;
- (void)_addInsertions;
- (void)_addReplacements;
- (void)_addSpecialEnglishWords;
- (void)_advanceIndexes;
- (void)_removePrefixes;
- (void)_addDeletions;
- (BOOL)_addEnglishWordsEndingAtIndex:(unsigned long long)a0 quickly:(BOOL)a1;
- (void)_addPrefixes;
- (void)_addTranspositions;
- (void)_addValidSequenceReplacements;
- (void)_filterModifications;
- (void)_removeModificationsAndMoveStartingPoint;
- (void)addInputCharacter:(unsigned short)a0 geometryModel:(void *)a1 geometryData:(id)a2;
- (id)addedModifications;
- (id)currentModifications;
- (void)removeNumberOfInputCharacters:(unsigned long long)a0;
- (id)removedModifications;
- (void)setValidSequenceCorrectionThreshold:(double)a0;
- (double)validSequenceCorrectionThreshold;

@end
