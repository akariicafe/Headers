@class LSPlugInKitProxy, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface UNSNotificationServiceExtension : NSObject {
    NSExtension *_extension;
    double _serviceTime;
    double _graceTime;
}

@property (readonly, nonatomic) LSPlugInKitProxy *proxy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;
+ (id)_extensionIdentifiersToPerExtensionQueues;
+ (void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)a0;
+ (void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)a0;
+ (BOOL)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)a0;

- (id)proxy;
- (void).cxx_destruct;
- (id)queue;
- (id)_initWithExtension:(id)a0 serviceTime:(double)a1 graceTime:(double)a2;
- (id)mutateContentForNotificationRequest:(id)a0 error:(id *)a1;

@end
