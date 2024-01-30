@class NSArray;

@interface PhotosControlCommand : NSObject {
    NSArray *_args;
    unsigned char _options;
}

@property (readonly) BOOL isVerbose;

+ (id)usage;
+ (long long)minimumArgs;
+ (id)abbreviations;
+ (struct option { char *x0; int x1; int *x2; int x3; } *)longopts;
+ (id)name;
+ (const char *)optstring;
+ (id)usagesummary;
+ (long long)maximumArgs;

- (id)args;
- (void)willProcessOptions;
- (BOOL)processArgc:(int)a0 argv:(char **)a1;
- (void)output:(id)a0 arguments:(char *)a1;
- (void)outputError:(id)a0 arguments:(char *)a1;
- (id)dataForPathOrStdin:(id)a0;
- (BOOL)writeData:(id)a0 toPathOrStdout:(id)a1;
- (void)waitForSigInt;
- (id)init;
- (void).cxx_destruct;
- (void)output:(id)a0;
- (id)description;
- (BOOL)processOption:(int)a0 arg:(id)a1;
- (void)outputError:(id)a0;
- (id)initWithArgc:(int)a0 argv:(char **)a1 options:(unsigned char)a2;

@end
