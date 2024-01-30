@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AFMediaRemoteDeviceInfo : NSObject {
    NSString *_groupIdentifier;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) BOOL lastFetchSucceeded;
@property (copy, nonatomic) NSString *routeIdentifier;

+ (id)currentDevice;
+ (id)localDeviceInfo;

- (id)init;
- (void).cxx_destruct;
- (void)_updateDeviceInfoWithCompletion:(id /* block */)a0;
- (void)getGroupIdentifierWithCompletion:(id /* block */)a0;
- (void)_activeDeviceInfoChanged:(id)a0;
- (void)getRouteIdentifierWithCompletion:(id /* block */)a0;

@end
