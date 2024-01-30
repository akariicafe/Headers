@class NSString;

@interface BRKAudioFileReader : NSObject {
    struct OpaqueExtAudioFile { } *_audioFile;
}

@property (readonly, nonatomic) NSString *path;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)readData:(short *)a0 count:(long long *)a1;

@end
