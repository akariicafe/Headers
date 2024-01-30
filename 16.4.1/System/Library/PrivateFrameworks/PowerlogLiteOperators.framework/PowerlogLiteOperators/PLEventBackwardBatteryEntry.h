@interface PLEventBackwardBatteryEntry : PLEntry

+ (id)entryKey;
+ (void)load;
+ (void)populateCellVoltageForEntry:(id)a0 withRawData:(id)a1;
+ (void)populateCellWOMForEntry:(id)a0 withRawData:(id)a1;
+ (void)populateDODForEntry:(id)a0 withRawData:(id)a1;
+ (void)populateQmaxForEntry:(id)a0 withRawData:(id)a1;
+ (void)populatewRaForEntry:(id)a0 withRawData:(id)a1;

- (id)initEntryWithRawData:(id)a0;
- (void)dealloc;
- (id)absoluteLevelWithRawData:(id)a0;
- (id)levelWithRawData:(id)a0;
- (void)populatePowerOutFromRawData:(id)a0;
- (void)populatePresentDODFromRawData:(id)a0;
- (void)populateTLCCounterWithRawData:(id)a0;
- (id)rawLevelWithRawData:(id)a0;

@end
