@class NSMutableArray;

@interface CompositionDuckingTimes : NSObject

@property (retain, nonatomic) NSMutableArray *duckingEvents;
@property int projectDurationInFrames;

+ (id)compositionDuckingTimesWithProject:(id)a0;

- (id)initWithProject:(id)a0;
- (void)dealloc;
- (BOOL)clipIsAudible:(id)a0;
- (BOOL)shouldDuckAtTime:(int)a0;
- (void)addDuckingFromTime:(int)a0 toTime:(int)a1;
- (void)makeDuckingDataForEditListWithProject:(id)a0;
- (void)makeDuckingDataForForegroundAudioClipsWithProject:(id)a0;
- (void)appendDuckingChangeAtFrameTime:(int)a0 shouldDuck:(BOOL)a1;
- (int)nextDuckChangeTimeFromTime:(int)a0;

@end
