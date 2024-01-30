@class NSArray, NSPointerArray, NSObject;
@protocol OS_dispatch_queue;

@interface MRExternalDeviceManager : NSObject {
    NSPointerArray *_devicesPointerArray;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) NSArray *allDevices;

+ (id)sharedManager;

- (id)init;
- (void)clearDevices;
- (void).cxx_destruct;
- (void)registerDevice:(id)a0;
- (id)deviceWithIdentifier:(id)a0;

@end
