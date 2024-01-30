@class NSDateFormatter, NSFileHandle;

@interface PLModelMigratorLog : NSObject {
    NSFileHandle *_fileHandle;
    NSDateFormatter *_dateFormatter;
}

+ (id)setup;
+ (id)openWriteFileAtURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)logFromCodeLocation:(struct { char *x0; int x1; })a0 subsystem:(id)a1 level:(int)a2 format:(const char *)a3;
- (id)buildFormatString:(const char *)a0;
- (id)new;
- (void)logFromCodeLocation:(struct { char *x0; int x1; })a0 subsystem:(id)a1 level:(int)a2 message:(id)a3;
- (id)initWithLogFileURL:(id)a0;
- (id)initWithFileHandle:(id)a0;

@end
