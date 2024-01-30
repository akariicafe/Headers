@class AVAudioFormat;

@interface AVAudioBuffer : NSObject <NSCopying, NSMutableCopying> {
    void *_impl;
}

@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *audioBufferList;
@property (readonly, nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *mutableAudioBufferList;

- (unsigned int)byteLength;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned int)byteCapacity;
- (id)initWithFormat:(id)a0 byteCapacity:(unsigned int)a1;
- (void)setByteLength:(unsigned int)a0;

@end
