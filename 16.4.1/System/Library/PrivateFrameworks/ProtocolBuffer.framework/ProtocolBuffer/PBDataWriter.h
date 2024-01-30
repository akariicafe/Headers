@class PBMutableData;

@interface PBDataWriter : NSObject {
    PBMutableData *_data;
}

- (BOOL)writeData:(id)a0;
- (unsigned long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)writeSint64:(long long)a0 forTag:(unsigned int)a1;
- (void)writeUint32:(unsigned int)a0 forTag:(unsigned int)a1;
- (void)writeString:(id)a0 forTag:(unsigned int)a1;
- (void)writeUint64:(unsigned long long)a0 forTag:(unsigned int)a1;
- (void)writeFloat:(float)a0 forTag:(unsigned int)a1;
- (void)writeBigEndianShortThenString:(id)a0;
- (void)writeInt64:(long long)a0 forTag:(unsigned int)a1;
- (void)writeUint8:(unsigned char)a0;
- (void)writeTag:(unsigned int)a0 andType:(unsigned char)a1;
- (void)writeData:(id)a0 forTag:(unsigned int)a1;
- (void)writeBOOL:(BOOL)a0 forTag:(unsigned int)a1;
- (void)writeInt32:(int)a0 forTag:(unsigned int)a1;
- (id)immutableData;
- (id)data;
- (void)writeSfixed64:(long long)a0 forTag:(unsigned int)a1;
- (void)writeInt8:(char)a0;
- (id)initWithInitialCapacity:(unsigned long long)a0;
- (void)writeBareVarint:(unsigned long long)a0;
- (void)writeProtoBuffer:(id)a0;
- (void)writeBigEndianFixed32:(unsigned int)a0;
- (void)writeSfixed32:(int)a0 forTag:(unsigned int)a1;
- (void)writeBigEndianFixed16:(unsigned short)a0;
- (id)init;
- (void)writeDouble:(double)a0 forTag:(unsigned int)a1;
- (void)writeFixed32:(unsigned int)a0 forTag:(unsigned int)a1;
- (void).cxx_destruct;
- (void)writeSint32:(int)a0 forTag:(unsigned int)a1;
- (void)writeFixed64:(unsigned long long)a0 forTag:(unsigned int)a1;

@end
