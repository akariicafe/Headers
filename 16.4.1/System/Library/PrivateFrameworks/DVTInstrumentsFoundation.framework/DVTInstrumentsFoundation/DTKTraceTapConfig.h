@interface DTKTraceTapConfig : DTTapConfig

@property (nonatomic) unsigned int kdebugTriggerIndex;
@property (nonatomic) unsigned char recordingPriority;
@property (nonatomic) unsigned long long bufferSizeOverride;
@property (nonatomic) BOOL bufferSizeOverrideClamping;
@property (nonatomic) BOOL canUseRawKtraceFile;
@property (copy, nonatomic) id /* block */ sessionHandler;
@property (copy, nonatomic) id /* block */ stackshotHandler;

+ (void)initialize;
+ (BOOL)localMachineSupportsPMC;
+ (BOOL)localMachineSupportsPMI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (int)_addTriggerConfig:(id)a0;
- (int)addTriggerConfig:(id)a0;
- (void)enumerateTriggerConfigs:(id /* block */)a0;
- (unsigned long long)triggerConfigCount;

@end
