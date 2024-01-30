@class NSObject;
@protocol OS_dispatch_source;

@interface CalSignalSensor : NSObject {
    NSObject<OS_dispatch_source> *_signalSource;
}

@property (nonatomic) int signal;
@property (copy, nonatomic) id /* block */ fireBlock;

- (void).cxx_destruct;
- (void)stopSensor;
- (void)dealloc;
- (void)_shutDownSource;
- (void)startSensor;
- (id)initWithSignal:(int)a0;
- (id)description;

@end
