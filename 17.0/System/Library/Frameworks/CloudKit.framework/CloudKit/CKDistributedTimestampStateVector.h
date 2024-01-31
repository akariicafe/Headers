@interface CKDistributedTimestampStateVector : CKDistributedTimestampClockVector

- (void)addClockValuesInIndexSet:(id)a0 withAtomState:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (void)addClockValuesInIndexSet:(id)a0 withClockType:(unsigned char)a1 atomState:(unsigned char)a2 forSiteIdentifier:(id)a3;
- (void)addClockValuesInIndexSet:(id)a0 withClockType:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (unsigned char)atomStateForTimestamp:(id)a0;
- (id)clockVector;
- (BOOL)containsTimestampsWithAtomState:(unsigned char)a0;
- (id)descriptionWithStringSiteIdentifiers:(BOOL)a0 usingSuperscripts:(BOOL)a1;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)a0;
- (void)enumerateClockValuesForSiteIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasAtomStateNotInStateVector:(id)a0;
- (id)initWithClockValuesInIndexSet:(id)a0 withAtomState:(unsigned char)a1 forSiteIdentifier:(id)a2;
- (void)intersectStateVector:(id)a0;
- (void)minusStateVector:(id)a0;
- (void)unionStateVector:(id)a0;
- (void)unionVector:(id)a0;
- (unsigned char)vectorExpansionState;
- (id)vectorFilteredByAtomState:(unsigned char)a0;

@end
