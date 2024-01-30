@class RMConnectionClient, NSObject;
@protocol OS_dispatch_queue;

@interface RMDummyDataManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isReceivingRelatveData;
@property (copy, nonatomic) id /* block */ relativeDataCallback;
@property (retain, nonatomic) RMConnectionClient *connectionClient;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)startReceivingDummyDataUpdates:(id /* block */)a0;
- (void)stopReceivingDummyDataUpdates;
- (id)dummyDataConfiguration;

@end
