@class AVAudioFormat, PHASEEngine, PHASENumberMetaParameter, PHASEMixer;

@interface PHASEPushStreamNode : NSObject {
    struct UniqueObjectId { unsigned long long mStorage[2]; } _actionTreeUniqueId;
    unsigned long long _nodeUID;
}

@property (weak, nonatomic) PHASEEngine *engine;
@property (readonly) BOOL normalize;
@property (readonly, nonatomic) PHASENumberMetaParameter *gainMetaParameter;
@property (readonly, nonatomic) PHASENumberMetaParameter *rateMetaParameter;
@property (readonly, nonatomic) PHASEMixer *mixer;
@property (readonly, nonatomic) AVAudioFormat *format;

- (void).cxx_destruct;
- (void)scheduleBuffer:(id)a0 atTime:(id)a1 options:(unsigned long long)a2 completionCallbackType:(long long)a3 completionHandler:(id /* block */)a4;
- (void)scheduleBuffer:(id)a0 completionCallbackType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)scheduleBuffer:(id)a0;
- (id)initWithEngine:(id)a0 actionTreeUniqueId:(struct UniqueObjectId { unsigned long long x0[2]; })a1 nodeStringHashId:(unsigned long long)a2 mixer:(id)a3 format:(id)a4 normalize:(BOOL)a5;
- (void)scheduleBuffer:(id)a0 atTime:(id)a1 options:(unsigned long long)a2;

@end
