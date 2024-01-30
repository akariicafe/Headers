@class NSDictionary, NSString;

@interface OSALog : NSObject {
    BOOL _preserveFiles;
}

@property (readonly) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *stream;
@property (readonly) NSDictionary *metaData;
@property (readonly) NSString *filepath;
@property BOOL deleteOnRetire;
@property (readonly) NSString *bugType;

+ (void)cleanupRetired:(id)a0;
+ (void)iterateLogsWithOptions:(id)a0 usingBlock:(id /* block */)a1;
+ (void)purgeLogs:(id)a0;
+ (void)markDescriptor:(int)a0 forKey:(id)a1 withObj:(id)a2;
+ (unsigned int)scanLogs:(id)a0 from:(id)a1;
+ (void)markDescriptor:(int)a0 withPairs:(id)a1 andOptions:(id)a2;
+ (id)createForSubmission:(id)a0 metadata:(id)a1 options:(id)a2 error:(id *)a3 writing:(id /* block */)a4;
+ (id)locallyCreateForSubmission:(id)a0 metadata:(id)a1 options:(id)a2 error:(id *)a3 writing:(id /* block */)a4;
+ (id)scanProxies:(id)a0;
+ (void)enableLocalLogCreation;
+ (void)markPurgability:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)retire:(const char *)a0;
- (void)rename:(id)a0;
- (id)description;
- (BOOL)isReasonableSize:(long long)a0 forRouting:(id)a1;
- (id)initWithPath:(id)a0 forRouting:(id)a1 usingConfig:(id)a2 options:(id)a3 error:(id *)a4;
- (void)closeFileStream;
- (id)initWithType:(id)a0 filepath:(id)a1 metadata:(id)a2 options:(id)a3 at:(double)a4 error:(id *)a5;
- (id)initWithFilepath:(id)a0 type:(id)a1;
- (void)markWithKey:(const char *)a0 value:(const char *)a1;
- (id)initWithPath:(id)a0 forRouting:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWithPath:(id)a0 forRouting:(id)a1 options:(id)a2;

@end
