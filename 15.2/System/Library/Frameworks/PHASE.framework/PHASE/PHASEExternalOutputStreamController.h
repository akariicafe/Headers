@class NSUUID, PHASEMixerDefinition, PHASENumberMetaParameterDefinition, NSMutableDictionary, NSDictionary, PHASEMixer, PHASEListener, PHASESource, PHASEEngine;

@interface PHASEExternalOutputStreamController : NSObject {
    PHASEEngine *_engine;
    struct UniqueObjectId { unsigned long long mStorage[2]; } _controlToken;
    long long _state;
    NSMutableDictionary *_soundEvents;
    NSMutableDictionary *_metaParameters;
    NSUUID *_groupUUID;
    PHASENumberMetaParameterDefinition *_gainMetaParameterDefinition;
    PHASEMixerDefinition *_mixerDefinition;
    PHASESource *_source;
    PHASEListener *_listener;
    BOOL _normalize;
    long long _calibrationMode;
    double _level;
    unsigned int _channelLayoutTag;
}

@property (readonly, nonatomic) PHASEMixer *mixer;
@property (readonly) NSDictionary *metaParameters;

+ (id)new;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 callback:(id /* block */)a6;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 referenceGainDBSPL:(double)a6 callback:(id /* block */)a7;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 normalize:(BOOL)a6 calibrationMode:(long long)a7 level:(double)a8 callback:(id /* block */)a9;
+ (void)controllerWithEngine:(id)a0 streamUUID:(id)a1 mixerDefinition:(id)a2 source:(id)a3 listener:(id)a4 callback:(id /* block */)a5;

- (BOOL)startAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)prepareAndReturnError:(id *)a0;
- (void)setMetaParameter:(id)a0 value:(double)a1 withTimeInterval:(double)a2;
- (void)setMetaParameter:(id)a0 value:(id)a1;
- (id)initWithEngine:(id)a0 groupUUID:(id)a1 gainMetaParameterDefinition:(id)a2 mixerDefinition:(id)a3 source:(id)a4 listener:(id)a5 normalize:(BOOL)a6 calibrationMode:(long long)a7 level:(double)a8 outError:(id *)a9;
- (void)updateGroupUUID:(id)a0 streamUUID:(id)a1 state:(long long)a2;
- (void)setControlToken:(struct UniqueObjectId { unsigned long long x0[2]; })a0;
- (void)stopAndInvalidate;
- (id)metaParametersForStreamUUID:(id)a0;
- (struct UniqueObjectId { unsigned long long x0[2]; })controlToken;
- (void)stopAndDestroy;

@end
