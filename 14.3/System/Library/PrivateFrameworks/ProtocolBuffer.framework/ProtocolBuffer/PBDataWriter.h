@class PBMutableData;

@interface PBDataWriter : NSObject {
    PBMutableData *_data;
}

- (void)writeFixed32:(unsigned int)a0 forTag:(unsigned int)a1;
- (void)writeUint8:(unsigned char)a0;
- (void)writeData:(id)a0 forTag:(unsigned int)a1;
- (void)writeInt32:(int)a0 forTag:(unsigned int)a1;
- (id)init;
- (void)writeBigEndianFixed32:(unsigned int)a0;
- (id)immutableData;
- (void)writeUint64:(unsigned long long)a0 forTag:(unsigned int)a1;
- (id)data;
- (void)writeFixed64:(unsigned long long)a0 forTag:(unsigned int)a1;
- (void)dealloc;
- (unsigned long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)writeString:(id)a0 forTag:(unsigned int)a1;
- (void)writeInt64:(long long)a0 forTag:(unsigned int)a1;
- (void)writeProtoBuffer:(id)a0;
- (void)writeFloat:(float)a0 forTag:(unsigned int)a1;
- (void)writeUint32:(unsigned int)a0 forTag:(unsigned int)a1;
- (void)writeBareVarint:(unsigned long long)a0;
- (void)writeSfixed32:(int)a0 forTag:(unsigned int)a1;
- (void)writeSint32:(int)a0 forTag:(unsigned int)a1;
- (void)writeBigEndianFixed16:(unsigned short)a0;
- (BOOL)writeData:(id)a0;
- (void)writeTag:(unsigned int)a0 andType:(unsigned char)a1;
- (void)writeDouble:(double)a0 forTag:(unsigned int)a1;
- (void)writeBigEndianShortThenString:(id)a0;
- (void)writeSint64:(long long)a0 forTag:(unsigned int)a1;
- (void)writeBOOL:(BOOL)a0 forTag:(unsigned int)a1;
- (void)writeInt8:(char)a0;
- (void)writeSfixed64:(long long)a0 forTag:(unsigned int)a1;

@end
