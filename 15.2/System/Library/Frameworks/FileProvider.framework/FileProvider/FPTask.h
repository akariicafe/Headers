@class NSArray, NSFileHandle;

@interface FPTask : NSObject

@property (retain, nonatomic) NSArray *argv;
@property (retain, nonatomic) NSFileHandle *standardOutput;
@property (retain, nonatomic) NSFileHandle *standardError;
@property (readonly, nonatomic) int waitStatus;

+ (id)taskWithCommandWithArguments:(id)a0;
+ (id)taskWithCommand:(id)a0;
+ (id)sanitizeStringForFilename:(id)a0;
+ (id)taskWithRedirectedOutputAndCommand:(id)a0;
+ (id)taskWithArguments:(id)a0;

- (int)exec;
- (void)setCommand:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setCommandWithArguments:(id)a0;
- (void)resetRedirect;
- (int)_prepareRedirections:(void **)a0;
- (int)execAsync;

@end
