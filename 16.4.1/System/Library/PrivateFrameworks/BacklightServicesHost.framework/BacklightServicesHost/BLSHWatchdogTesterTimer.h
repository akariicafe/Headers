@class NSString;

@interface BLSHWatchdogTesterTimer : NSObject <BLSHWatchdogTiming> {
    BOOL _invalidated;
    NSString *_explanation;
}

@property (nonatomic, getter=hasSleepBeenImminentSinceScheduled) BOOL sleepImminentSinceScheduled;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)initWithExplanation:(id)a0;
- (void).cxx_destruct;

@end
