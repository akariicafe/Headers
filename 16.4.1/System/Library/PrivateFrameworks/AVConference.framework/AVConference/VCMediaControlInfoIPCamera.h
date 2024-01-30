@interface VCMediaControlInfoIPCamera : VCMediaControlInfo {
    unsigned char _controlInfoCVO[8];
}

- (id)init;
- (unsigned long long)serializedSize;
- (int)configureWithBuffer:(const char *)a0 length:(unsigned long long)a1 optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; } *)a2;
- (int)getInfo:(void *)a0 bufferLength:(unsigned long long)a1 infoSize:(unsigned long long *)a2 type:(unsigned int)a3;
- (BOOL)hasInfoType:(unsigned int)a0;
- (id)initWithBuffer:(const char *)a0 length:(unsigned long long)a1 optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; BOOL x8; BOOL x9; } *)a2 version:(unsigned char)a3;
- (int)serializeToBuffer:(char *)a0 bufferLength:(unsigned long long)a1 blobLength:(unsigned long long *)a2;
- (int)setInfo:(void *)a0 size:(unsigned long long)a1 type:(unsigned int)a2;

@end
