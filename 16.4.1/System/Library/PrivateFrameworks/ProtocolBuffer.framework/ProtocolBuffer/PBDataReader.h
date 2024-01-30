@class NSData;

@interface PBDataReader : NSObject {
    BOOL _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (id)initWithData:(id)a0;
- (id)readBytes:(unsigned int)a0;
- (long long)readSint64;
- (id)readData;
- (id)readBigEndianShortThenString;
- (id)readProtoBuffer;
- (BOOL)hasError;
- (unsigned long long)readUint64;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;
- (double)readDouble;
- (unsigned long long)offset;
- (BOOL)readBOOL;
- (char)readInt8;
- (long long)readVarInt;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (id)data;
- (int)readSfixed32;
- (long long)readSfixed64;
- (long long)readInt64;
- (float)readFloat;
- (void)updateData:(id)a0;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (int)readInt32;
- (unsigned int)readFixed32;
- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)hasMoreData;
- (unsigned long long)readBigEndianFixed64;
- (int)readSint32;
- (unsigned short)readBigEndianFixed16;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (unsigned int)readUint32;
- (unsigned long long)readFixed64;
- (unsigned int)readBigEndianFixed32;
- (void).cxx_destruct;
- (BOOL)isAtEnd;
- (id)readString;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;

@end
