@class NSURL, NSString, NSNumber;
@protocol ARReplayConfigurationDelegate, ARReplaySensorProtocol;

@interface ARReplayConfiguration : ARCustomTechniquesConfiguration <ARReplaySensorDelegate> {
    id<ARReplaySensorProtocol> _replaySensor;
    NSNumber *_vioSessionID;
}

@property (readonly, nonatomic) NSURL *fileURL;
@property (weak, nonatomic) id<ARReplayConfigurationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;

- (id)initPrivate;
- (void)play;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)pause;
- (BOOL)isEqual:(id)a0;
- (long long)worldAlignment;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (id)secondaryTechniques;
- (id)imageSensorSettingsForUltraWide;
- (id)initWithBaseConfiguration:(id)a0 replaySensor:(id)a1;
- (void)replaySensorDidFinishReplayingData;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (id)initWithBaseConfiguration:(id)a0 fileURL:(id)a1 replayMode:(long long)a2 outError:(id *)a3;
- (id)initWithBaseConfiguration:(id)a0 fileURL:(id)a1 outError:(id *)a2;
- (id)initWithBaseConfiguration:(id)a0 replaySensor:(id)a1 replayingResultDataClasses:(id)a2;

@end
