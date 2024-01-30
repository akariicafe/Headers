@class NSUUID, NSString, NSArray, NSMutableArray;

@interface TITraceLogRecord : NSObject

@property (retain, nonatomic) NSUUID *recordUUID;
@property (retain, nonatomic) NSString *logText;
@property (retain, nonatomic) NSArray *context;
@property (readonly, retain, nonatomic) NSString *logTextWithHeader;
@property (nonatomic) unsigned long long logVersion;
@property (nonatomic) unsigned long long parsingStatus;
@property (retain, nonatomic) NSString *typedString;
@property (readonly, retain, nonatomic) NSMutableArray *parsedSections;
@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSArray *rawAutocorrectionCandidates;
@property (retain, nonatomic) NSArray *removedAutocorrectionCandidates;
@property (retain, nonatomic) NSArray *finalAutocorrectionCandidates;
@property (retain, nonatomic) NSArray *rawCompletionCandidates;
@property (retain, nonatomic) NSArray *removedCompletionCandidates;
@property (retain, nonatomic) NSArray *finalCompletionCandidates;
@property (retain, nonatomic) NSArray *rawPredictionCandidates;
@property (retain, nonatomic) NSArray *removedPredictionCandidates;
@property (retain, nonatomic) NSArray *finalPredictionCandidates;

- (void)addParsedSection:(id)a0;
- (unsigned long long)parse;
- (id)initWithRecordUUID:(id)a0 context:(id)a1 logText:(id)a2 logVersion:(unsigned long long)a3;
- (id)initWithRecordUUID:(id)a0 logText:(id)a1 logVersion:(unsigned long long)a2;
- (void).cxx_destruct;

@end
