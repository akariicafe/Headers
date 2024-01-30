@class NSObject;
@protocol OS_dispatch_source;

@interface CalSignalSensor : NSObject {
    NSObject<OS_dispatch_source> *_signalSource;
}

@property (nonatomic) int signal;
@property (copy, nonatomic) id /* block */ fireBlock;

- (void)startSensor;
- (void)dealloc;
- (void)stopSensor;
- (id)description;
- (void)_shutDownSource;
- (void).cxx_destruct;
- (id)initWithSignal:(int)a0;

@end
