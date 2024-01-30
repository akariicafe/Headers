@interface AVMIDINoteEvent : AVMusicEvent {
    struct MIDINoteMessage { unsigned char channel; unsigned char note; unsigned char velocity; unsigned char releaseVelocity; float duration; } _msg;
}

@property (readonly) struct MIDINoteMessage { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; float x4; } *message;
@property unsigned int channel;
@property unsigned int key;
@property unsigned int velocity;
@property double duration;

- (BOOL)isEqualTo:(id)a0;
- (id)initWithMessage:(struct MIDINoteMessage { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; float x4; } *)a0;
- (id)initWithChannel:(unsigned int)a0 key:(unsigned int)a1 velocity:(unsigned int)a2 duration:(double)a3;

@end
