@interface SGCuratedContactMatcher : NSObject

+ (id)fetchMeContactFromContactStore:(id)a0;
+ (id)_filterCandidates:(id)a0 withUniqueDetailMatchesToContact:(id)a1 andFeatures:(struct { struct { unsigned short x0; unsigned short x1; } x0; int x1; int x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; float x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; } *)a2;
+ (BOOL)_compareContact:(id)a0 cnContact:(id)a1 newDetails:(id *)a2 matchedDetails:(id *)a3 matchPreference:(long long)a4 stopOnNewDetail:(BOOL)a5 stopOnMatchedDetail:(BOOL)a6;
+ (id)_filterCandidates:(id)a0 similarToName:(id)a1 exceedingThreshold:(double)a2;
+ (id)_findContactsMatchingPseudoContact:(id)a0 withName:(id)a1 andFeatures:(struct { struct { unsigned short x0; unsigned short x1; } x0; int x1; int x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; float x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; } *)a2 fromContactStore:(id)a3 withKeysToFetch:(id)a4;
+ (id)_findFuzzyNameCandidatesMatchingPseudoContact:(id)a0 withName:(id)a1 andFeatures:(struct { struct { unsigned short x0; unsigned short x1; } x0; int x1; int x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; float x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; } *)a2 fromContactStore:(id)a3 withKeysToFetch:(id)a4;
+ (id)_getPeopleWithNameToken:(id)a0 fromContactStore:(id)a1 withKeysToFetch:(id)a2 ifMatchingPredicate:(id /* block */)a3;
+ (BOOL)_isMeContact:(id)a0 withContactStore:(id)a1;
+ (id)_realtimeContactFromPseudoContact:(id)a0 andFeatures:(struct { struct { unsigned short x0; unsigned short x1; } x0; int x1; int x2; int x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; float x9; int x10; int x11; int x12; int x13; int x14; BOOL x15; } *)a1 assimilatingMatchingCuratedContacts:(id)a2;
+ (id)_realtimeContactWithContactStore:(id)a0 forPseudoContact:(id)a1 fromEntity:(id)a2 normalizedName:(id)a3 error:(id *)a4;
+ (void)clearMeContactCache;
+ (void)compareContact:(id)a0 cnContact:(id)a1 newDetails:(id *)a2 matchedDetails:(id *)a3 matchPreference:(long long)a4;
+ (BOOL)compareContact:(id)a0 cnContact:(id)a1 stopOnNewDetail:(BOOL)a2 stopOnMatchedDetail:(BOOL)a3 matchPreference:(long long)a4;
+ (id)curatedContactsFromContactStore:(id)a0 matchingPseudoContact:(id)a1 error:(id *)a2;
+ (id)filterCandidates:(id)a0 withDetailSubsetOfCNContact:(id)a1;
+ (id)realtimeContactWithContactStore:(id)a0 forPseudoContact:(id)a1 error:(id *)a2;
+ (id)realtimeContactWithContactStore:(id)a0 forPseudoContact:(id)a1 fromEntity:(id)a2 error:(id *)a3;
+ (id)stripBirthdayFromSGContact:(id)a0;
+ (id)stripStaleBirthdayFromSGContact:(id)a0 withEntity:(id)a1;

@end
