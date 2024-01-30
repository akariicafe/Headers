@class NSMutableString;

@interface TIMecabraIMLogger : NSObject

@property (retain, nonatomic) NSMutableString *loggedMessage;

+ (BOOL)isLoggingEnabled;

- (id)logFilePath;
- (void).cxx_destruct;
- (void)beginLogging;
- (void)endLoggingForInput:(id)a0 atFinalTimeMark:(unsigned long long)a1;
- (void)markTime:(unsigned long long)a0;
- (void)writeLogToFile;

@end
