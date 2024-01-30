@class NPNameComponentsData;

@interface NPHMMClassifier : NSObject {
    unsigned long long _totalGivenNamesCount;
    unsigned long long _totalFamilyNamesCount;
    unsigned long long _uniqueGivenNamesCount;
    unsigned long long _uniqueFamilyNamesCount;
    NPNameComponentsData *_nameComponentsData;
}

@property struct { struct { double givenName; double familyName; double initial; } givenName; struct { double givenName; double familyName; double initial; } familyName; double threshold; } stateProbabilities;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)genderMajorityForGivenName:(id)a0;
- (id)initWithHMMProbabilities:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; double x2; })a0 nameComponentsDate:(id)a1;
- (id)hiddenStatesFromObservationSequence:(id)a0;
- (struct _CFBurstTrie { } *)nameFrequencyTrieRef;
- (unsigned long long)frequencyForName:(id)a0 type:(unsigned long long)a1;
- (unsigned long long)extractMetricForType:(unsigned long long)a0;
- (unsigned long long)payloadForName:(id)a0 type:(unsigned long long)a1;
- (BOOL)isInitial:(id)a0;
- (BOOL)isGivenNameAbbreviation:(id)a0;
- (id)candidatesBasedOnFormatSequence:(id)a0;
- (id)candidatesBasedOnCommaDelimiterIndex:(unsigned long long)a0 sequenceSize:(unsigned long long)a1;
- (BOOL)formCompoundGivenName:(id)a0;
- (BOOL)formCompoundFamilyName:(id)a0;
- (BOOL)isParticle:(id)a0;
- (id)candidatesOfSize:(unsigned long long)a0 constraints:(unsigned long long)a1 compoundsConstraints:(id)a2 labelsContraints:(id)a3;
- (id)probabilityForHiddenSequence:(id)a0 knowingObservationSequence:(id)a1 boost:(unsigned long long)a2;
- (BOOL)isCoupleName:(id)a0;
- (BOOL)isLinkingToken:(id)a0;
- (BOOL)validSequence:(id)a0 compoundsConstraints:(id)a1 labelsConstraints:(id)a2;
- (double)startProbability:(id)a0;
- (double)stateTransitionProbabilityFrom:(id)a0 to:(id)a1;
- (double)emissionProbability:(id)a0 hiddenState:(unsigned long long)a1 isOOV:(BOOL *)a2;
- (id)compoundsFromName:(id)a0;
- (id)compoundsFromName:(id)a0 includeSpaceAsDelimiter:(BOOL)a1;

@end
