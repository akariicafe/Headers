@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface JTFrameRateCalculator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) unsigned long long receivedRenderCount;
@property (nonatomic) unsigned long long droppedRenderCount;
@property (nonatomic) unsigned long long receivedDisplayFrameCount;
@property (nonatomic) unsigned long long droppedDisplayFrameCount;
@property (nonatomic) double windowSize;
@property (retain, nonatomic) NSDate *stateDate;
@property (copy, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithWindowSize:(double)a0;
- (void)log:(id /* block */)a0;
- (void)JT_restart;
- (void)tickReceived;
- (void)tickDropped;
- (void)tickFrameReceived;
- (void)tickDroppedDisplay;

@end
