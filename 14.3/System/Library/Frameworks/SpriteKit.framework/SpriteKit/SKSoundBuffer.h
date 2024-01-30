@class NSString;

@interface SKSoundBuffer : NSObject {
    unsigned int _bufferId;
    NSString *_path;
    double _duration;
}

@property (readonly, nonatomic) unsigned int bufferId;
@property (readonly, nonatomic) double duration;

+ (id)bufferWithFileNamed:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
