@class NSArray, NSString;

@interface BRTask : NSObject

@property (retain, nonatomic) NSArray *argv;
@property (retain, nonatomic) NSString *redirectStdoutToFileAtPath;
@property (nonatomic) int redirectStdoutToFileDescriptor;
@property (retain, nonatomic) NSString *redirectStderrToFileAtPath;
@property (nonatomic) int redirectStderrToFileDescriptor;
@property (readonly, nonatomic) int waitStatus;

+ (id)sanitizeStringForFilename:(id)a0;
+ (id)taskWithCommand:(id)a0;
+ (id)taskWithCommandWithArguments:(id)a0;

- (void)setCommand:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)exec;
- (void)resetRedirect;
- (void)setCommandWithArguments:(id)a0;

@end
