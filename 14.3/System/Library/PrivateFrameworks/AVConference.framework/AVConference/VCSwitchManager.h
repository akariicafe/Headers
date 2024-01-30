@interface VCSwitchManager : NSObject

@property unsigned int localSwitches;
@property unsigned int remoteSwitches;
@property unsigned int negotiatedSwitches;

- (id)description;
- (void)initializeLocalSwitches;
- (BOOL)isLocalSwitchEnabled:(unsigned int)a0;
- (void)negotiateSwitches;
- (BOOL)isSwitchEnabled:(unsigned int)a0;
- (void)setupLocalSwitchesIndividually;
- (void)updateDuplicationEnhancementSwitches;
- (void)setupLocalOnOffSwitchesFromMasterSwitch;
- (void)setupLocalAudioTestGroupSwitches;
- (void)setupLocalVideoTestGroupSwitches;
- (void)setupLocalNetworkTestGroupSwitches;
- (void)setupLocalRateControlTestGroupSwitches;
- (void)setupLocalDuplicationTestGroupSwitches;
- (void)setupLocalOnOffSwitches;
- (void)setupLocalABTestSwitches;

@end
