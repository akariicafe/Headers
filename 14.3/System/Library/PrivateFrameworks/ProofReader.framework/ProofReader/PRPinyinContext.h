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
    BOOL _lastSyllableIsPartial;
}

- (id)init;
- (void)reset;
- (void)dealloc;
- (id)description;
- (id)correction;
- (id)guesses;
- (id)prefixes;
- (id)completions;
- (void)_removeModificationsAndMoveStartingPoint;
- (void)_advanceIndexes;
- (void)_addTranspositions;
- (void)_addReplacements;
- (void)_addDeletions;
- (void)_filterModifications;
- (void)addInputCharacter:(unsigned short)a0 geometryModel:(void *)a1 geometryData:(id)a2;
- (void)_addInsertions;
- (void)removeNumberOfInputCharacters:(unsigned long long)a0;
- (id)currentModifications;
- (id)addedModifications;
- (id)removedModifications;
- (void)setValidSequenceCorrectionThreshold:(double)a0;
- (double)validSequenceCorrectionThreshold;
- (BOOL)_addEnglishWordForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 quickly:(BOOL)a1;
- (BOOL)_addEnglishWordsEndingAtIndex:(unsigned long long)a0 quickly:(BOOL)a1;
- (void)_addSpecialEnglishWords;
- (void)_addEnglishWordsQuickly:(BOOL)a0;
- (void)_addValidSequenceReplacements;
- (void)_removePrefixes;
- (void)_addPrefixes;

@end
