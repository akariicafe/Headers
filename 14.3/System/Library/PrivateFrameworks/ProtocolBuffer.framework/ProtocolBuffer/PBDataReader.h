@class NSData;

@interface PBDataReader : NSObject {
    BOOL _error;
    const char *_bytes;
    NSData *_data;
}

@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long position;

- (int)readSint32;
- (char)readInt8;
- (unsigned short)readBigEndianFixed16;
- (unsigned long long)readUint64;
- (unsigned int)readBigEndianFixed32;
- (int)readInt32;
- (void)updateData:(id)a0;
- (id)readString;
- (id)data;
- (id)readBigEndianShortThenString;
- (void)recall:(const struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)hasError;
- (double)readDouble;
- (id)readData;
- (BOOL)seekToOffset:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (int)readSfixed32;
- (BOOL)mark:(struct { unsigned long long x0; unsigned long long x1; } *)a0;
- (BOOL)hasMoreData;
- (long long)readSfixed64;
- (void)dealloc;
- (void)readTag:(unsigned int *)a0 type:(char *)a1;
- (unsigned long long)offset;
- (BOOL)skipValueWithTag:(unsigned int)a0 type:(unsigned char)a1;
- (void)readTag:(unsigned short *)a0 andType:(char *)a1;
- (unsigned int)readUint32;
- (unsigned long long)readFixed64;
- (unsigned long long)readBigEndianFixed64;
- (float)readFloat;
- (BOOL)isAtEnd;
- (id)readBytes:(unsigned int)a0;
- (long long)readInt64;
- (long long)readSint64;
- (id)readProtoBuffer;
- (unsigned int)readFixed32;
- (BOOL)readBOOL;
- (long long)readVarInt;
- (BOOL)skipValueWithTag:(unsigned short)a0 andType:(unsigned char)a1;

@end
