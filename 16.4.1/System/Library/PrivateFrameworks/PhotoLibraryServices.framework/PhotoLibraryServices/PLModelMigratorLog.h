@class NSDateFormatter;

@interface PLModelMigratorLog : NSObject {
    NSDateFormatter *_dateFormatter;
}

+ (id)setup;
+ (id)new;
+ (id)openLoggerAtURL:(id)a0 logRotate:(BOOL)a1;

- (void)dealloc;
- (void)close;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLogFileURL:(id)a0 logRotate:(BOOL)a1;
- (void)logWithMessage:(const char *)a0 fromCodeLocation:(struct { char *x0; int x1; })a1 type:(unsigned char)a2;

@end
