@class NSMutableData, ENArchive, NSMutableArray;

@interface ENProtobufCoder : NSObject {
    unsigned char _staticBuffer[256];
    NSMutableArray *_subCoders;
}

@property (readonly, nonatomic) ENArchive *readArchive;
@property (readonly, nonatomic) const char *readBase;
@property (readonly, nonatomic) const char *readSrc;
@property (readonly, nonatomic) const char *readEnd;
@property (readonly, nonatomic) char *writeBase;
@property (readonly, nonatomic) char *writeDst;
@property (readonly, nonatomic) char *writeLim;
@property (readonly, nonatomic) struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *fileHandle;
@property (readonly, nonatomic) NSMutableData *bufferData;
@property (nonatomic) unsigned long long bufferOffset;
@property (nonatomic) unsigned long long bufferMaxSize;

- (void).cxx_destruct;
- (id)init;
- (void)prepareForReuse;
- (void)setFileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (void)setReadArchive:(id)a0;
- (BOOL)readType:(char *)a0 tag:(unsigned long long *)a1 eofOkay:(BOOL)a2 error:(id *)a3;
- (BOOL)readFixedUInt64:(unsigned long long *)a0 error:(id *)a1;
- (id)readNSStringAndReturnError:(id *)a0;
- (BOOL)readVarIntUInt32:(unsigned int *)a0 error:(id *)a1;
- (BOOL)skipType:(unsigned char)a0 error:(id *)a1;
- (void)setWriteMutableData:(id)a0;
- (BOOL)writeFixedUInt64:(unsigned long long)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeNSString:(id)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeVarIntUInt32:(unsigned int)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (const char *)readLengthDelimited:(unsigned long long *)a0 error:(id *)a1;
- (void)setReadMemory:(const void *)a0 length:(unsigned long long)a1;
- (BOOL)readVarIntSInt32:(int *)a0 error:(id *)a1;
- (id)readNSDataAndReturnError:(id *)a0;
- (BOOL)readVarIntBoolean:(BOOL *)a0 error:(id *)a1;
- (void)setWriteMemory:(void *)a0 length:(unsigned long long)a1;
- (BOOL)writeVarIntSInt32:(int)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeNSData:(id)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeVarIntBoolean:(BOOL)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)writeLengthDelimitedPtr:(const void *)a0 length:(unsigned long long)a1 tag:(unsigned long long)a2 error:(id *)a3;
- (BOOL)readVarInt:(unsigned long long *)a0 eofOkay:(BOOL)a1 error:(id *)a2;
- (const char *)_readLength:(unsigned long long)a0 eofOkay:(BOOL)a1 error:(id *)a2;
- (BOOL)writeVarInt:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_writeBytes:(const void *)a0 length:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_skipLength:(unsigned long long)a0 error:(id *)a1;
- (id)dequeueOrCreateSubCoder;
- (void)enqueueSubCoder:(id)a0;
- (BOOL)readVarIntInt32:(int *)a0 error:(id *)a1;
- (BOOL)readVarIntSInt64:(long long *)a0 error:(id *)a1;
- (BOOL)writeVarIntSInt64:(long long)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)readVarIntUInt64:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)writeVarIntUInt64:(unsigned long long)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)readFixedFloat:(float *)a0 error:(id *)a1;
- (BOOL)writeFixedFloat:(float)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)readFixedSInt32:(int *)a0 error:(id *)a1;
- (BOOL)writeFixedSInt32:(int)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)readFixedUInt32:(unsigned int *)a0 error:(id *)a1;
- (BOOL)writeFixedUInt32:(unsigned int)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)readFixedDouble:(double *)a0 error:(id *)a1;
- (BOOL)writeFixedDouble:(double)a0 tag:(unsigned long long)a1 error:(id *)a2;
- (BOOL)readFixedSInt64:(long long *)a0 error:(id *)a1;
- (BOOL)writeFixedSInt64:(long long)a0 tag:(unsigned long long)a1 error:(id *)a2;

@end
