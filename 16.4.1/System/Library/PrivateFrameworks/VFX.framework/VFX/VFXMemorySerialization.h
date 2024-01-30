@interface VFXMemorySerialization : NSObject

+ (int)VFXSerializedBufferSize:(void *)a0 type:(long long)a1;
+ (void)writeDouble:(double)a0 to:(void *)a1;
+ (void)writeSIMD2F:(SEL)a0 to:(void *)a1;
+ (void)writeSIMD3F:(SEL)a0 to:(void *)a1;
+ (void)writeSIMD4F:(SEL)a0 to:(void *)a1;
+ (void)writeUInt16:(unsigned short)a0 to:(void *)a1;
+ (void)writeUInt64:(unsigned long long)a0 to:(void *)a1;
+ (void)writeSIMD2D:(SEL)a0 to:(void *)a1;
+ (void)writeSIMD3D:(SEL)a0 to:(void *)a1;
+ (void)writeSIMD4D:(SEL)a0 to:(void *)a1;
+ (void)writeUInt32:(unsigned int)a0 to:(void *)a1;
+ (BOOL)readBool:(void *)a0;
+ (double)readDouble:(void *)a0;
+ (float)readFloat:(void *)a0;
+ (short)readInt16:(void *)a0;
+ (int)readInt32:(void *)a0;
+ (long long)readInt64:(void *)a0;
+ (char)readInt8:(void *)a0;
+ (long long)readInt:(void *)a0;
+ (void /* unknown type, empty encoding */)readSIMD2D:(void *)a0;
+ (void /* unknown type, empty encoding */)readSIMD2F:(void *)a0;
+ (void /* unknown type, empty encoding */)readSIMD3D:(void *)a0;
+ (void /* unknown type, empty encoding */)readSIMD3F:(void *)a0;
+ (struct { void /* unknown type, empty encoding */ x0[3]; })readSIMD3x3D:(void *)a0;
+ (struct { void /* unknown type, empty encoding */ x0[3]; })readSIMD3x3F:(void *)a0;
+ (void /* unknown type, empty encoding */)readSIMD4D:(void *)a0;
+ (void /* unknown type, empty encoding */)readSIMD4F:(void *)a0;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })readSIMD4x4D:(void *)a0;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })readSIMD4x4F:(void *)a0;
+ (unsigned short)readUInt16:(void *)a0;
+ (unsigned int)readUInt32:(void *)a0;
+ (unsigned long long)readUInt64:(void *)a0;
+ (unsigned char)readUInt8:(void *)a0;
+ (void)writeBool:(BOOL)a0 to:(void *)a1;
+ (void)writeFloat:(float)a0 to:(void *)a1;
+ (void)writeInt16:(short)a0 to:(void *)a1;
+ (void)writeInt32:(int)a0 to:(void *)a1;
+ (void)writeInt64:(long long)a0 to:(void *)a1;
+ (void)writeInt8:(char)a0 to:(void *)a1;
+ (void)writeInt:(long long)a0 to:(void *)a1;
+ (void)writeSIMD3x3D:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 to:(void *)a1;
+ (void)writeSIMD3x3F:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 to:(void *)a1;
+ (void)writeSIMD4x4D:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 to:(void *)a1;
+ (void)writeSIMD4x4F:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 to:(void *)a1;
+ (void)writeUInt8:(unsigned char)a0 to:(void *)a1;
+ (void)writeString:(id)a0 to:(void *)a1;
+ (id)readString:(void *)a0;

- (id)init;

@end
