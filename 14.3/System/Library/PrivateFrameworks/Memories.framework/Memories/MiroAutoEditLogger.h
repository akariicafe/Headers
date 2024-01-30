@class NSRegularExpression, NSMutableString;

@interface MiroAutoEditLogger : NSObject

@property (retain, nonatomic) NSMutableString *log;
@property (nonatomic) long long loggingLevel;
@property (nonatomic) long long indentationLevel;
@property (retain, nonatomic) NSRegularExpression *framesRegex;
@property (nonatomic) long long disableLoggingCount;
@property (nonatomic) BOOL logsToConsole;

- (void)commit;
- (id)init;
- (void).cxx_destruct;
- (void)enableLogging;
- (void)disableLogging;
- (void)logAndDescribeFrameCounts:(BOOL)a0 level:(long long)a1 formatString:(id)a2;
- (void)incrementIndentationLevel;
- (void)decrementIndentationLevel;

@end
