@class NSDateFormatter, NSFileHandle;

@interface PLModelMigratorLog : NSObject {
    NSFileHandle *_fileHandle;
    NSDateFormatter *_dateFormatter;
}

+ (id)new;
+ (id)setup;
+ (id)openWriteFileAtURL:(id)a0;

- (void)logFromCodeLocation:(struct { char *x0; int x1; })a0 subsystem:(id)a1 type:(unsigned char)a2 format:(const char *)a3;
- (id)buildFormatString:(const char *)a0;
- (void)_logFromCodeLocation:(struct { char *x0; int x1; })a0 subsystem:(id)a1 type:(unsigned char)a2 message:(const char *)a3;
- (id)initWithLogFileURL:(id)a0;
- (id)initWithFileHandle:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
