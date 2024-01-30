@class NSObject, NSArray, HIDManager, NSMutableArray;
@protocol OS_dispatch_queue, AXSSMotionTrackingHIDManagerDelegate;

@interface AXSSMotionTrackingHIDManager : NSObject

@property (nonatomic) BOOL _monitoring;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_hidManagerDispatchQueue;
@property (retain, nonatomic) HIDManager *_hidManager;
@property (retain, nonatomic) NSMutableArray *_devices;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (weak, nonatomic) id<AXSSMotionTrackingHIDManagerDelegate> delegate;

- (void)startMonitoring;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopMonitoring;
- (void)_deviceNotification:(id)a0 added:(BOOL)a1;

@end
