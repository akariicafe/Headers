@interface STStream : STSStgObject

@property (readonly, nonatomic) struct _Stream { } *cStream;

- (id)readBytes:(unsigned int)a0;
- (int)readSInt32;
- (unsigned long long)readUInt64;
- (void)dealloc;
- (void)setClass:(struct { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; })a0;
- (void)close;
- (unsigned int)readUInt32;
- (void)writeFloat32:(float)a0;
- (void)writeFloat64:(double)a0;
- (void)writeUInt16:(unsigned short)a0;
- (void)writeUInt32:(unsigned int)a0;
- (id)getInfo;
- (unsigned int)getPos;
- (id)initWithCStream:(struct _Stream { } *)a0;
- (unsigned char)readBool8;
- (unsigned short)readChar16;
- (char)readChar8;
- (float)readFloat32;
- (double)readFloat64;
- (short)readSInt16;
- (id)readString16:(unsigned int)a0;
- (unsigned short)readUInt16;
- (unsigned char)readUInt8;
- (void)releaseCStream;
- (void)seek:(int)a0 fromOrigin:(int)a1;
- (void)writeBool8:(unsigned char)a0;
- (void)writeBytes:(id)a0;
- (void)writeChar16:(unsigned short)a0;
- (void)writeChar8:(char)a0;
- (void)writeSInt16:(short)a0;
- (void)writeSInt32:(int)a0;
- (void)writeString16:(id)a0;
- (void)writeString16NoTerminator:(id)a0;
- (void)writeUInt8:(unsigned char)a0;

@end
