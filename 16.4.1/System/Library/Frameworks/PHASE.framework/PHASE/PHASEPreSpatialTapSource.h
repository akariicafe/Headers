@class AVAudioFormat, NSString, PHASEEngine;

@interface PHASEPreSpatialTapSource : NSObject {
    PHASEEngine *_weakEngine;
}

@property (readonly, copy, nonatomic) AVAudioFormat *format;
@property (readonly, nonatomic) NSString *identifier;

+ (id)new;

- (void)removeSource:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addSource:(id)a0;
- (void)removeSubmixId:(struct UniqueObjectId { unsigned long long x0[2]; })a0;
- (void)addMixer:(id)a0;
- (void)addSubmixId:(struct UniqueObjectId { unsigned long long x0[2]; })a0;
- (id)initWithEngine:(id)a0 description:(id)a1;
- (id)initWithEngine:(id)a0 identifier:(id)a1;
- (id)initWithEngine:(id)a0 identifier:(id)a1 binding:(long long)a2;
- (void)removeMixer:(id)a0;

@end
