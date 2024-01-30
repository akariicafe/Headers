@class TUCallCenter, NSObject;
@protocol OS_dispatch_queue;

@interface VPEmergencyCallStateObserver : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) TUCallCenter *underlyingCallCenter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (void)dealloc;
- (void).cxx_destruct;
- (void)handleCallStatusChanged:(id)a0;
- (id)initWithEmergencyCallStateHandler:(id /* block */)a0;
- (BOOL)isInEmergencyCall;

@end
