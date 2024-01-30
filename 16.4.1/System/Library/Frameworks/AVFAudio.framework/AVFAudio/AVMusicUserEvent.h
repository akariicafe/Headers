@class NSMutableData;

@interface AVMusicUserEvent : AVMusicEvent {
    NSMutableData *_userData;
}

@property (readonly) struct MusicEventUserData { unsigned int x0; unsigned char x1[1]; } *userData;
@property (readonly) unsigned int sizeInBytes;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithUserData:(struct MusicEventUserData { unsigned int x0; unsigned char x1[1]; } *)a0;

@end
