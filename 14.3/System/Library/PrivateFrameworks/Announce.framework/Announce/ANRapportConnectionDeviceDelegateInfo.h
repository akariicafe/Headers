@class NSObject;
@protocol ANRapportConnectionDeviceDelegate, OS_dispatch_queue;

@interface ANRapportConnectionDeviceDelegateInfo : NSObject

@property (readonly, nonatomic) id<ANRapportConnectionDeviceDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1;

@end
