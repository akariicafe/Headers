@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ASDAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldProcessChangeForAccount:(id)a0 oldAccount:(id)a1;

@end
