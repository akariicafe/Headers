@class NSURL, NSString, ARRecordingTechniquePublic;

@interface ARRecordingConfiguration : ARCustomTechniquesConfiguration <ARRecordingTechniqueDelegate>

@property unsigned long long state;
@property (retain, nonatomic) ARRecordingTechniquePublic *recordingTechnique;
@property (copy) id /* block */ finishBlock;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;
+ (BOOL)supportsFrameSemantics:(unsigned long long)a0;

- (void)startRecording;
- (id)initPrivate;
- (id)videoFormat;
- (void)setVideoFormat:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (long long)worldAlignment;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (id)secondaryTechniques;
- (void)technique:(id)a0 didFinishWithResult:(id)a1;
- (void)abortRecording;
- (id)initWithBaseConfiguration:(id)a0 fileURL:(id)a1;
- (id)initWithBaseConfiguration:(id)a0 recordingTechnique:(id)a1;
- (void)finishRecordingWithHandler:(id /* block */)a0;
- (void)ensureTechniqueAndCustomSensorCompatibility;

@end
