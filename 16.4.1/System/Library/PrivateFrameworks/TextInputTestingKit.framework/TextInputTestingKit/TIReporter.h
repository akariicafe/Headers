@class NSString, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TIReporter : NSObject {
    NSObject<OS_dispatch_queue> *_logSerializationQueue;
    BOOL _isTransliterating;
}

@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *localeIdentifierForLanguage;
@property (readonly, nonatomic) NSString *textCorpus;
@property (readonly, nonatomic) NSString *buildVersion;
@property (copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSMutableArray *resultLoggers;

+ (id)fileURLForTrial:(unsigned long long)a0 withOptions:(id)a1;
+ (id)languageForOptions:(id)a0;
+ (id)textCorpusForOptions:(id)a0;

- (void).cxx_destruct;
- (void)collectAggdStatisticsForResult:(id)a0;
- (id)reportForTrial:(unsigned long long)a0;
- (id)reportForAutocorrectionResults:(id)a0;
- (id)alignedTypingSequenceForResult:(id)a0 keystrokeSegmentationMode:(unsigned long long)a1;
- (id)alignedTypingSequenceForTransliteratedResult:(id)a0;
- (void)beginLogTrial;
- (void)endLogTrial;
- (id)initWithBuildVersion:(id)a0;
- (void)logResult:(id)a0;
- (id)resultsForTrial:(unsigned long long)a0;
- (BOOL)shouldConcatenateTokensAtBoundaryError;

@end
