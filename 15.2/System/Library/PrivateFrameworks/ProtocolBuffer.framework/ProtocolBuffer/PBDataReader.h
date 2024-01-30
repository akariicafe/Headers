@class NSData;

@interface PBDataReader : NSObject {
    BOOL _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (BOOL)hasError;
- (unsigned long long)readFixed64;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (long long)readInt64;
- (BOOL)readBOOL;
- (BOOL)isAtEnd;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (id)initWithData:(id)a0;
- (char)readInt8;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (id)readProtoBuffer;
- (long long)readSint64;
- (unsigned long long)readBigEndianFixed64;
- (unsigned int)readUint32;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;
- (id)readBigEndianShortThenString;
- (float)readFloat;
- (void).cxx_destruct;
- (int)readSfixed32;
- (unsigned int)readFixed32;
- (id)readBytes:(unsigned int)a0;
- (unsigned long long)offset;
- (int)readSint32;
- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (unsigned long long)readUint64;
- (double)readDouble;
- (void)updateData:(id)a0;
- (BOOL)hasMoreData;
- (id)readData;
- (id)readString;
- (long long)readVarInt;
- (int)readInt32;
- (long long)readSfixed64;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;
- (unsigned int)readBigEndianFixed32;
- (id)data;
- (unsigned short)readBigEndianFixed16;

@end
