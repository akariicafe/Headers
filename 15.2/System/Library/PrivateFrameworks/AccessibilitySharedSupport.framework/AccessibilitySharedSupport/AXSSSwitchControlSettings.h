@class NSArray;

@interface AXSSSwitchControlSettings : NSObject

@property (copy, nonatomic) NSArray *scanningStyles;
@property (copy, nonatomic) NSArray *tapBehaviors;
@property (copy, nonatomic) NSArray *cursorSizes;
@property (copy, nonatomic) NSArray *postActivationScanLocations;
@property (nonatomic) double autoScanningInterval;
@property (nonatomic) double autoHideTimeout;
@property (nonatomic) double pauseOnFirstItemInterval;
@property (nonatomic) unsigned long long numberOfScanLoops;
@property (nonatomic) double dwellDuration;
@property (nonatomic) double repeatActionInterval;
@property (nonatomic) double holdDuration;
@property (nonatomic) double ignoreRepeatDuration;
@property (nonatomic) BOOL soundEffectsEnabled;
@property (nonatomic) BOOL speechEnabled;
@property (nonatomic) double longPressDuration;
@property (nonatomic) double autoTapTimeout;

- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)dictionaryRepresentation;

@end
