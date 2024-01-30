@class HMDCharacteristicWriteRequest, NSObject;
@protocol OS_dispatch_queue;

@interface HMDPendingCharacteristic : NSObject

@property (readonly) HMDCharacteristicWriteRequest *writeRequest;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id /* block */ handler;

- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 queue:(id)a1 handler:(id /* block */)a2;

@end
