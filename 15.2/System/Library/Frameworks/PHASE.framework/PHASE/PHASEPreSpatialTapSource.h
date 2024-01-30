@class AVAudioFormat, NSString, PHASEEngine;

@interface PHASEPreSpatialTapSource : NSObject {
    PHASEEngine *_weakEngine;
}

@property (readonly, copy, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (void)addSource:(id)a0;
- (void)removeSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithEngine:(id)a0 identifier:(id)a1;
- (id)initWithEngine:(id)a0 description:(id)a1;
- (void)addSubmixId:(struct UniqueObjectId { unsigned long long x0[2]; })a0;
- (void)removeSubmixId:(struct UniqueObjectId { unsigned long long x0[2]; })a0;
- (void)addMixer:(id)a0;
- (void)removeMixer:(id)a0;

@end
