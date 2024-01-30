@class NSArray, NSPointerArray, NSObject;
@protocol OS_dispatch_queue;

@interface MRExternalDeviceManager : NSObject {
    NSPointerArray *_devicesPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) NSArray *allDevices;

+ (id)sharedManager;

- (void)registerDevice:(id)a0;
- (void).cxx_destruct;
- (void)clearDevices;
- (id)init;
- (id)deviceWithIdentifier:(id)a0;

@end
