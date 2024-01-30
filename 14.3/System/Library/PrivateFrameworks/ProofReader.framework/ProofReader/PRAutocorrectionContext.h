@interface PRAutocorrectionContext : NSObject {
    unsigned long long _modificationMask;
}

+ (void)clearCaches;
+ (id)autocorrectionContextOfType:(unsigned long long)a0;

- (void)reset;
- (id)correction;
- (id)guesses;
- (id)prefixes;
- (id)completions;
- (void)addInputCharacter:(unsigned short)a0 geometryModel:(void *)a1 geometryData:(id)a2;
- (id)currentModifications;
- (id)addedModifications;
- (id)removedModifications;
- (void)addInputCharacter:(unsigned short)a0 geometryData:(id)a1;
- (void)setModificationMask:(unsigned long long)a0;
- (unsigned long long)modificationMask;
- (void)setValidSequenceCorrectionThreshold:(double)a0;
- (double)validSequenceCorrectionThreshold;

@end
