@interface _CDAutoSuConfig : NSObject

@property (nonatomic) int restrictionStartInSlot;
@property (nonatomic) int restrictionEndInSlot;
@property (nonatomic) int suStartDefaultTime;
@property (nonatomic) int suEndDefaultTimeOffsetFromSuStart;
@property (nonatomic) BOOL alwaysFallBackToDefault;
@property (nonatomic) BOOL alwaysReturnUnlockNow;
@property (nonatomic) BOOL allowUnlockBeforeNow;
@property (nonatomic) double unlockThreshold;
@property (nonatomic) double startThreshold;
@property (nonatomic) double endThreshold;
@property (nonatomic) int unlockMarginInSlot;

- (int)readConfig;
- (void)setParam;
- (BOOL)validParam;

@end
