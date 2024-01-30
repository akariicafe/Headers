@class NSUUID, PHASEMixerDefinition, PHASENumberMetaParameterDefinition, NSMutableDictionary, NSDictionary, PHASEMixer, PHASEListener, PHASESource, PHASEGroup, PHASEEngine;

@interface PHASEExternalOutputStreamController : NSObject {
    PHASEEngine *_engine;
    struct UniqueObjectId { unsigned long long mStorage[2]; } _controlToken;
    long long _state;
    NSMutableDictionary *_soundEvents;
    NSMutableDictionary *_metaParameters;
    NSUUID *_streamGroupUUID;
    PHASENumberMetaParameterDefinition *_gainMetaParameterDefinition;
    PHASEMixerDefinition *_mixerDefinition;
    PHASESource *_source;
    PHASEListener *_listener;
    PHASEGroup *_group;
    BOOL _normalize;
    long long _calibrationMode;
    double _level;
    unsigned int _channelLayoutTag;
}

@property (readonly, nonatomic) PHASEMixer *mixer;
@property (readonly, copy) NSDictionary *mixers;
@property (readonly) NSDictionary *metaParameters;

+ (id)new;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 callback:(id /* block */)a6;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 group:(id)a6 normalize:(BOOL)a7 calibrationMode:(long long)a8 level:(double)a9 callback:(id /* block */)a10;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 normalize:(BOOL)a6 calibrationMode:(long long)a7 level:(double)a8 callback:(id /* block */)a9;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 referenceGainDBSPL:(double)a6 callback:(id /* block */)a7;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 mixerDefinition:(id)a2 source:(id)a3 listener:(id)a4 callback:(id /* block */)a5;

- (BOOL)startAndReturnError:(id *)a0;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)prepareAndReturnError:(id *)a0;
- (void)stopAndInvalidate;
- (struct UniqueObjectId { unsigned long long x0[2]; })controlToken;
- (id)initWithEngine:(id)a0 streamGroupUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 group:(id)a6 normalize:(BOOL)a7 calibrationMode:(long long)a8 level:(double)a9 outError:(id *)a10;
- (id)metaParametersForStreamUUID:(id)a0;
- (void)setControlToken:(struct UniqueObjectId { unsigned long long x0[2]; })a0;
- (void)setMetaParameter:(id)a0 value:(id)a1;
- (void)setMetaParameter:(id)a0 value:(double)a1 withTimeInterval:(double)a2;
- (void)stopAndDestroy;
- (void)updateStreamGroupUUID:(id)a0 streamUUID:(id)a1 state:(long long)a2;

@end
