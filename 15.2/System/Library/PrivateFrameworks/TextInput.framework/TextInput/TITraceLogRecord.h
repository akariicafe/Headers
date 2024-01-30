@class NSUUID, NSString, NSArray, NSMutableArray;

@interface TITraceLogRecord : NSObject

@property (retain, nonatomic) NSUUID *recordUUID;
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

- (id)initWithRecordUUID:(id)a0;
- (void)addParsedSection:(id)a0;
- (void).cxx_destruct;

@end
