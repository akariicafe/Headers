@interface PLEventBackwardBatteryEntry : PLEntry

+ (void)load;
+ (id)entryKey;
+ (void)populateQmaxForEntry:(id)a0 withRawData:(id)a1;
+ (void)populateCellWOMForEntry:(id)a0 withRawData:(id)a1;
+ (void)populateDODForEntry:(id)a0 withRawData:(id)a1;

- (void)dealloc;
- (id)initEntryWithRawData:(id)a0;
- (void)populatePresentDODFromRawData:(id)a0;
- (id)levelWithRawData:(id)a0;
- (id)rawLevelWithRawData:(id)a0;
- (id)absoluteLevelWithRawData:(id)a0;

@end
