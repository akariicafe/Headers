@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface TITraceLogCandidateGroup : NSObject <TITraceLogCandidateExportRepresenting> {
    NSMutableArray *_candidates;
}

@property (nonatomic) double probability;
@property (retain, nonatomic) NSString *sequenceString;
@property (retain, nonatomic) NSString *omegaFactorsString;
@property (nonatomic) double omegaWordScore;
@property (nonatomic) double omegaLanguagePowerScore;
@property (nonatomic) double omegaTypingScore;
@property (nonatomic) double omegaGeometryScore;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupFromGroupString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addCandidate:(id)a0;

@end
