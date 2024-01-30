@class NSArray, TIKeyboardCandidate, NSDictionary, NSString, TIKeyboardIntermediateText;

@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *initiallyHiddenCandidates;
@property (nonatomic) unsigned long long selectedHiddenCandidateIndex;
@property (retain, nonatomic) NSArray *candidates;
@property (nonatomic) unsigned long long initialSelectedIndex;
@property (copy, nonatomic) TIKeyboardCandidate *defaultCandidate;
@property (retain, nonatomic) NSArray *sortMethods;
@property (retain, nonatomic) NSDictionary *sortMethodGroups;
@property (retain, nonatomic) NSDictionary *indexTitles;
@property (retain, nonatomic) NSDictionary *showExtensionCandidates;
@property (retain, nonatomic) NSArray *disambiguationCandidates;
@property (nonatomic) unsigned long long selectedDisambiguationCandidateIndex;
@property (readonly, nonatomic) BOOL hasCandidates;
@property (readonly, nonatomic) BOOL hasOnlyProactiveCandidates;
@property (readonly, nonatomic) NSArray *proactiveTriggers;
@property (readonly, nonatomic) TIKeyboardCandidate *firstCandidate;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (nonatomic) BOOL excludedExtensionCandidates;
@property (nonatomic) unsigned long long generatedCandidateCount;
@property (nonatomic) unsigned long long batchCandidateLocation;
@property (readonly, nonatomic) BOOL isDummySet;
@property (retain, nonatomic) NSString *committedText;
@property (retain, nonatomic) TIKeyboardIntermediateText *uncommittedText;
@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (nonatomic) BOOL inputManagerHasPendingCandidatesUpdate;

+ (id)setWithCandidates:(id)a0 initialSelectedIndex:(unsigned long long)a1 defaultCandidate:(id)a2 sortMethods:(id)a3 sortMethodGroups:(id)a4 indexTitles:(id)a5 showExtensionCandidates:(id)a6 disambiguationCandidates:(id)a7 selectedDisambiguationCandidateIndex:(unsigned long long)a8;
+ (id)setWithCandidates:(id)a0 initialSelectedIndex:(unsigned long long)a1 defaultCandidate:(id)a2 sortMethods:(id)a3 sortMethodGroups:(id)a4 indexTitles:(id)a5 showExtensionCandidates:(id)a6 initiallyHiddenCandidates:(id)a7 selectedHiddenCandidateIndex:(unsigned long long)a8 proactiveTriggers:(id)a9;
+ (id)setWithCandidates:(id)a0 initialSelectedIndex:(unsigned long long)a1 defaultCandidate:(id)a2 sortMethods:(id)a3 sortMethodGroups:(id)a4 indexTitles:(id)a5 showExtensionCandidates:(id)a6 disambiguationCandidates:(id)a7 selectedDisambiguationCandidateIndex:(unsigned long long)a8 proactiveTriggers:(id)a9;
+ (id)setWithCandidates:(id)a0 initialSelectedIndex:(unsigned long long)a1 defaultCandidate:(id)a2 sortMethods:(id)a3 sortMethodGroups:(id)a4 indexTitles:(id)a5 showExtensionCandidates:(id)a6 initiallyHiddenCandidates:(id)a7 selectedHiddenCandidateIndex:(unsigned long long)a8;
+ (id)dummySet;
+ (id)setWithCandidates:(id)a0;
+ (id)setWithCandidates:(id)a0 proactiveTriggers:(id)a1;

- (id)initWithCandidates:(id)a0 initialSelectedIndex:(unsigned long long)a1 defaultCandidate:(id)a2 sortMethods:(id)a3 sortMethodGroups:(id)a4 indexTitles:(id)a5 showExtensionCandidates:(id)a6 disambiguationCandidates:(id)a7 selectedDisambiguationCandidateIndex:(unsigned long long)a8 proactiveTriggers:(id)a9;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSubsetOf:(id)a0;
- (id)setByAppendingSet:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (unsigned long long)positionInCandidateList:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
