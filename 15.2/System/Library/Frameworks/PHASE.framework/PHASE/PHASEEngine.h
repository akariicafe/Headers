@class NSArray, PHASETapRegistry, NSMutableDictionary, NSDictionary, PHASEAssetRegistry, PHASEGroupPreset, NSMutableArray, PHASEMedium, PHASEObject;

@interface PHASEEngine : NSObject {
    struct unique_ptr<PHASEEngineImpl, std::default_delete<PHASEEngineImpl>> { struct __compressed_pair<PHASEEngineImpl *, std::default_delete<PHASEEngineImpl>> { struct PHASEEngineImpl *__value_; } __ptr_; } _impl;
    PHASEObject *_rootObject;
    PHASEMedium *_defaultMedium;
    long long _outputSpatializationMode;
    double _unitsPerSecond;
    NSMutableArray *_internalSoundEvents;
    struct StopWatch<std::chrono::steady_clock> { struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> { struct duration<long long, std::ratio<1, 1000000000>> { long long __rep_; } __d_; } mStart; } _stopWatch;
    NSMutableDictionary *_groups;
    NSMutableDictionary *_duckers;
    double _maxGainDbSpl;
}

@property (readonly, nonatomic) void *implementation;
@property (readonly, nonatomic) long long engineMode;
@property (readonly, nonatomic) double sampleRate;
@property (nonatomic) long long spatialHint;
@property (nonatomic) long long experience;
@property (nonatomic) double balance;
@property (nonatomic) double maximumGainDbSpl;
@property (readonly, nonatomic) PHASETapRegistry *tapRegistry;
@property (nonatomic) long long overrideOutputSpatializationMode;
@property (nonatomic) long long outputSpatializationMode;
@property (readonly, nonatomic) long long renderingState;
@property (readonly, nonatomic) PHASEObject *rootObject;
@property (retain, nonatomic) PHASEMedium *defaultMedium;
@property (nonatomic) long long defaultReverbPreset;
@property (nonatomic) double unitsPerSecond;
@property (nonatomic) double unitsPerMeter;
@property (readonly, nonatomic) PHASEAssetRegistry *assetRegistry;
@property (readonly, copy, nonatomic) NSArray *soundEvents;
@property (readonly, copy, nonatomic) NSDictionary *groups;
@property (readonly, copy, nonatomic) NSArray *duckers;
@property (readonly, nonatomic) PHASEGroupPreset *activeGroupPreset;

+ (id)new;

- (void)addGroup:(id)a0;
- (id)initWithPlatform:(id)a0;
- (void)removeGroup:(id)a0;
- (void)update;
- (BOOL)startAndReturnError:(id *)a0;
- (id)initWithUpdateMode:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)pause;
- (void)dealloc;
- (id).cxx_construct;
- (void)stop;
- (void)setInternalActiveGroupMixerPreset:(id)a0;
- (BOOL)initInternalWithUpdateMode:(long long)a0 engineMode:(long long)a1 platform:(id)a2;
- (BOOL)setHeadphoneHRIRFile:(id)a0 error:(id *)a1;
- (id)initWithUpdateMode:(long long)a0 engineMode:(long long)a1;
- (id)initWithSampleRate:(double)a0 updateMode:(long long)a1;
- (id)initWithUpdateMode:(long long)a0 engineMode:(long long)a1 platform:(id)a2;
- (BOOL)setHeadphoneHRIRFile:(id)a0 outError:(id *)a1;
- (void)enableTargetRoomAcousticParameters:(id)a0;
- (void)disableTargetRoomAcousticParameters;
- (void)setSpatialCategoryUpdateRate:(float)a0 withName:(id)a1;
- (void)setSpatialCategoryBandCount:(unsigned long long)a0 withName:(id)a1;
- (void)addSoundEvent:(id)a0;
- (void)removeSoundEvent:(id)a0;
- (void)addDucker:(id)a0;
- (void)removeDucker:(id)a0;

@end
