@class NSArray, NSMutableData;

@interface ENSignatureFile : NSObject {
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_fileHandle;
    NSMutableData *_outputData;
}

@property (copy, nonatomic) NSArray *signatures;

+ (id)_signatureFileWithProtobufCoder:(id)a0 error:(id *)a1;
+ (id)signatureFileWithArchive:(id)a0 error:(id *)a1;
+ (id)signatureFileWithBytes:(const char *)a0 length:(unsigned long long)a1 error:(id *)a2;

- (BOOL)closeAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)writeAndReturnError:(id *)a0;
- (BOOL)openWithFileSystemRepresentation:(const char *)a0 reading:(BOOL)a1 error:(id *)a2;
- (BOOL)openForWritingToData:(id)a0 error:(id *)a1;

@end
