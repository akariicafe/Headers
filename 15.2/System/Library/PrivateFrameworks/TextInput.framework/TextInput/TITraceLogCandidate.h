@class NSString, NSDictionary;

@interface TITraceLogCandidate : NSObject <TITraceLogCandidateExportRepresenting>

@property (nonatomic) unsigned int wordId;
@property (nonatomic) double probability;
@property (nonatomic) double contextProbability;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *lexiconLocaleIdentifier;
@property (retain, nonatomic) NSString *metadataString;
@property (retain, nonatomic) NSString *filterName;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)candidateFromRemovedCandidateString:(id)a0;
+ (id)candidateFromCandidateString:(id)a0;
+ (id)candidateFromFinalCandidateString:(id)a0;

- (void).cxx_destruct;

@end
