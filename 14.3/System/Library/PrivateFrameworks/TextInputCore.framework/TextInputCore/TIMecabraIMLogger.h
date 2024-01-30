@class NSMutableString;

@interface TIMecabraIMLogger : NSObject

@property (retain, nonatomic) NSMutableString *loggedMessage;

+ (BOOL)isLoggingEnabled;

- (void).cxx_destruct;
- (id)logFilePath;
- (void)beginLogging;
- (void)markTime:(unsigned long long)a0;
- (void)endLoggingForInput:(id)a0 atFinalTimeMark:(unsigned long long)a1;
- (void)writeLogToFile;

@end
