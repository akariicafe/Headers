@interface PRAutocorrectionContext : NSObject {
    unsigned long long _modificationMask;
}

+ (void)clearCaches;
+ (id)autocorrectionContextOfType:(unsigned long long)a0;

- (void)reset;
- (id)completions;
- (id)correction;
- (id)prefixes;
- (id)guesses;
- (void)addInputCharacter:(unsigned short)a0 geometryData:(id)a1;
- (void)addInputCharacter:(unsigned short)a0 geometryModel:(void *)a1 geometryData:(id)a2;
- (id)addedModifications;
- (id)currentModifications;
- (unsigned long long)modificationMask;
- (id)removedModifications;
- (void)setModificationMask:(unsigned long long)a0;
- (void)setValidSequenceCorrectionThreshold:(double)a0;
- (double)validSequenceCorrectionThreshold;

@end
