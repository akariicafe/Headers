@class PHImageDecoder;

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _cancelFlag;
    BOOL _cancelRequested;
}

@property (readonly, nonatomic) BOOL cancelRequested;
@property (readonly, nonatomic) PHImageDecoder *initialDecoder;
@property (nonatomic) unsigned long long figRequestID;
@property (nonatomic) unsigned long long figGainMapRequestID;
@property (retain, nonatomic) struct FigPhotoDecompressionContainer { } *figDecompressionContainer;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImageIODecoder:(id)a0;
- (id)initWithFigRequestID:(unsigned long long)a0 container:(struct FigPhotoDecompressionContainer { } *)a1 figDecoder:(id)a2;

@end
