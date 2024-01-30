@class AVAudioFormat;

@interface AVAudioBuffer : NSObject <NSCopying, NSMutableCopying> {
    void *_impl;
    id /* block */ _deallocator;
}

@property (readonly, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *audioBufferList;
@property (readonly, nonatomic) struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *mutableAudioBufferList;

- (unsigned int)byteLength;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setByteLength:(unsigned int)a0;
- (id)initWithFormat:(id)a0 byteCapacity:(unsigned int)a1;
- (id)initWithPCMFormat:(id)a0 byteCapacity:(unsigned int)a1 bufferListNoCopy:(const struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a2 deallocator:(id /* block */)a3;
- (unsigned int)byteCapacity;

@end
