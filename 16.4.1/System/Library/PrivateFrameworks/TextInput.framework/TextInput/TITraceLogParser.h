@protocol TITraceLogParsingDelegate;

@interface TITraceLogParser : NSObject

@property (nonatomic) unsigned long long version;
@property (weak, nonatomic) id<TITraceLogParsingDelegate> delegate;

- (void)parseTraceLogContent:(id)a0;
- (void).cxx_destruct;
- (void)parseTraceLogHeaderWithScanner:(id)a0;
- (id)convertStringToContext:(id)a0;
- (id)extractBeamSearchContextStringFromLogText:(id)a0;
- (BOOL)parseIntegerHeader:(id)a0 headerValue:(long long *)a1 withScanner:(id)a2;
- (BOOL)parseStringHeader:(id)a0 headerValue:(id *)a1 withScanner:(id)a2;
- (id)parseTraceLogContextFromLogText:(id)a0 andPriorContext:(id)a1;
- (id)parseTraceRecordWithScanner:(id)a0 andPriorContext:(id)a1;
- (void)parseTraceRecordsWithScanner:(id)a0;

@end
