@class AVOutputContext, NSNotificationCenter;
@protocol CRKOutputDevice;

@interface CRKConcreteAirPlayPrimitives : NSObject <CRKAirPlayPrimitives>

@property (readonly, nonatomic) AVOutputContext *outputContext;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<CRKOutputDevice> localOutputDevice;
@property (readonly, nonatomic) id<CRKOutputDevice> currentOutputDevice;

- (void).cxx_destruct;
- (id)initWithOutputContext:(id)a0 notificationCenter:(id)a1;
- (id)beginOutputDeviceBrowsingSession;
- (id)observeCurrentOutputDeviceChangesWithHandler:(id /* block */)a0;

@end
