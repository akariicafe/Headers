@class NSArray, NSString;

@interface FPTask : NSObject

@property (retain, nonatomic) NSArray *argv;
@property (retain, nonatomic) NSString *redirectStdoutToFileAtPath;
@property (nonatomic) int redirectStdoutToFileDescriptor;
@property (retain, nonatomic) NSString *redirectStderrToFileAtPath;
@property (nonatomic) int redirectStderrToFileDescriptor;
@property (readonly, nonatomic) int waitStatus;

+ (id)taskWithCommandWithArguments:(id)a0;
+ (id)taskWithCommand:(id)a0;
+ (id)sanitizeStringForFilename:(id)a0;
+ (id)taskWithRedirectedOutputAndCommand:(id)a0;

- (void)resetRedirect;
- (int)exec;
- (void)setCommandWithArguments:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setCommand:(id)a0;

@end
