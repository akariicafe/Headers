@class NSMutableArray;

@interface PRZhuyinContext : PRAutocorrectionContext {
    NSMutableArray *_modifications;
    NSMutableArray *_addedModifications;
    NSMutableArray *_removedModifications;
    NSMutableArray *_addedRemovedModifications;
    NSMutableArray *_prefixes;
    char *_buffer;
    unsigned long long *_syllableLengthArray;
    void *_connection;
    unsigned long long _length;
    unsigned long long _lengthBeforeApostrophes;
    unsigned long long _startingPoint;
    unsigned long long _lastIndexes[4];
    unsigned long long _nextIndexes[2];
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    BOOL _lastSyllableIsPartial;
}

- (id)init;
- (void)reset;
- (void)dealloc;
- (id)description;
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

@end
