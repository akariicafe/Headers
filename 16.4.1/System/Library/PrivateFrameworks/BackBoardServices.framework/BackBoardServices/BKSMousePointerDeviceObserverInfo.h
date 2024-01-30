@class NSSet;
@protocol BKSMousePointerDeviceObserver;

@interface BKSMousePointerDeviceObserverInfo : NSObject

@property (retain, nonatomic) id<BKSMousePointerDeviceObserver> observer;
@property (retain, nonatomic) NSSet *visibleDevices;

- (void).cxx_destruct;

@end
