@class NSArray, NSDictionary;

@interface BWStreamStartStopSynchronizer : NSObject {
    NSDictionary *_streamStatesByPortType;
    float _timeoutInSeconds;
    BOOL _masterStartedGroupEntered;
    NSArray *_synchronizationSlavesOrderedByPriority;
}

@property (nonatomic) BOOL waitForMasterAEToSettle;
@property (retain, nonatomic) NSArray *synchronizationSlavesOrderedByPriority;

+ (void)initialize;

- (void)streamDidStart:(id)a0;
- (id)initWithStreams:(id)a0 timeoutInSeconds:(float)a1;
- (BOOL)streamWillStop:(id)a0;
- (void)dealloc;
- (BOOL)streamWillStart:(id)a0;
- (void)streamDidStop:(id)a0;

@end
