@class NSArray;

@interface PhotosControlCommand : NSObject {
    NSArray *_args;
    unsigned char _options;
}

@property (readonly) BOOL isVerbose;

+ (id)usage;
+ (long long)maximumArgs;
+ (long long)minimumArgs;
+ (id)abbreviations;
+ (struct option { char *x0; int x1; int *x2; int x3; } *)longopts;
+ (id)name;
+ (const char *)optstring;
+ (id)usagesummary;

- (id)args;
- (void)waitForSigInt;
- (void)willProcessOptions;
- (void)output:(id)a0;
- (BOOL)processArgc:(int)a0 argv:(char **)a1;
- (void)outputJsonObject:(id)a0;
- (void)outputCompactJsonObject:(id)a0;
- (void)outputErrorWithJsonOutput:(BOOL)a0 format:(id)a1;
- (void)output:(id)a0 arguments:(char *)a1;
- (void)outputError:(id)a0 arguments:(char *)a1;
- (id)dataForPathOrStdin:(id)a0;
- (BOOL)writeData:(id)a0 toPathOrStdout:(id)a1;
- (id)description;
- (id)formatDuration:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)outputError:(id)a0;
- (BOOL)processOption:(int)a0 arg:(id)a1;
- (id)initWithArgc:(int)a0 argv:(char **)a1 options:(unsigned char)a2;

@end
