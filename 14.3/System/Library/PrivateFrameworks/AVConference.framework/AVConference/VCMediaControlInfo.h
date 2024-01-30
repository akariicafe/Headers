@protocol VCMediaControlInfoDelegate;

@interface VCMediaControlInfo : NSObject {
    unsigned short _bitmap;
}

@property (readonly) unsigned long long serializedSize;
@property id<VCMediaControlInfoDelegate> delegate;
@property unsigned char version;
@property unsigned char fecFeedbackVersion;

- (void)dispose;
- (void)invalidate;
- (id)initWithBuffer:(const char *)a0 length:(unsigned long long)a1 optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a2 version:(unsigned char)a3;
- (int)configureWithBuffer:(const char *)a0 length:(unsigned long long)a1 optionalControlInfo:(struct { double x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a2;
- (int)setInfo:(void *)a0 size:(unsigned long long)a1 type:(unsigned int)a2;
- (int)setInfoUnserialized:(struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned int x11; } *)a0 type:(unsigned int)a1;
- (BOOL)hasInfoType:(unsigned int)a0;
- (int)getInfo:(void *)a0 bufferLength:(unsigned long long)a1 infoSize:(unsigned long long *)a2 type:(unsigned int)a3;
- (int)getInfoUnserialized:(struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned int x11; } *)a0 type:(unsigned int)a1;
- (int)serializeToBuffer:(char *)a0 bufferLength:(unsigned long long)a1 blobLength:(unsigned long long *)a2;

@end
