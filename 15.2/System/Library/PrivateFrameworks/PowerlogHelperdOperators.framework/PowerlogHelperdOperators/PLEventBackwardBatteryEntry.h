@interface PLEventBackwardBatteryEntry : PLEntry

+ (id)entryKey;
+ (void)load;
+ (void)populateQmaxForEntry:(id)a0 withRawData:(id)a1;
+ (void)populateCellWOMForEntry:(id)a0 withRawData:(id)a1;
+ (void)populateDODForEntry:(id)a0 withRawData:(id)a1;
+ (void)populateCellVoltageForEntry:(id)a0 withRawData:(id)a1;

- (id)initEntryWithRawData:(id)a0;
- (void)dealloc;
- (void)populatePresentDODFromRawData:(id)a0;
- (void)populatePowerOutFromRawData:(id)a0;
- (id)levelWithRawData:(id)a0;
- (id)rawLevelWithRawData:(id)a0;
- (id)absoluteLevelWithRawData:(id)a0;

@end
