@class PHImageDecoder;

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _cancelFlag;
    BOOL _cancelRequested;
}

@property (nonatomic) unsigned long long figRequestID;
@property (nonatomic) unsigned long long figGainMapRequestID;
@property (retain, nonatomic) struct CMPhotoDecompressionContainer { } *c;
@property (retain, nonatomic) struct CMPhotoDecompressionContainer { } *figDecompressionContainer;
@property (readonly, nonatomic) BOOL cancelRequested;
@property (readonly, nonatomic) PHImageDecoder *initialDecoder;

- (id)initWithFigRequestID:(unsigned long long)a0 container:(struct CMPhotoDecompressionContainer { } *)a1 figDecoder:(id)a2;
- (id)initWithImageIODecoder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
