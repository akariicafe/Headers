@class NSArray, NSString;

@interface BRTask : NSObject

@property (retain, nonatomic) NSArray *argv;
@property (retain, nonatomic) NSString *redirectStdoutToFileAtPath;
@property (nonatomic) int redirectStdoutToFileDescriptor;
@property (retain, nonatomic) NSString *redirectStderrToFileAtPath;
@property (nonatomic) int redirectStderrToFileDescriptor;
@property (readonly, nonatomic) int waitStatus;

+ (id)taskWithCommandWithArguments:(id)a0;
+ (id)taskWithCommand:(id)a0;
+ (id)sanitizeStringForFilename:(id)a0;

- (int)exec;
- (void)setCommand:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setCommandWithArguments:(id)a0;
- (void)resetRedirect;

@end
