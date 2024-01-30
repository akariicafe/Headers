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
- (unsigned int)applyNegotiationRulesUsingLocalSwitches:(unsigned int)a0 negotiatedSwitches:(unsigned int)a1;
- (void)setupLocalOnOffSwitches;
- (void)setupLocalABTestSwitches;
- (void)negotiateSwitchesForIsCaller:(BOOL)a0;
- (void)setRemoteSwitches:(unsigned int)a0 isCaller:(BOOL)a1;

@end
