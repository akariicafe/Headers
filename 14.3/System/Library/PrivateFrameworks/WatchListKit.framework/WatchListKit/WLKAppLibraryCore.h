@class NSXPCConnection, PSSSSubscriptionManagerInternal, NSObject;
@protocol OS_dispatch_queue;

@interface WLKAppLibraryCore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    PSSSSubscriptionManagerInternal *_subscriptionManager;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_connection;
- (void)_fetchApplicationsInProcess:(id /* block */)a0;
- (void)fetchApplications:(id /* block */)a0;
- (id)_nonConformingBundleList;
- (id)_otherBundlesOfInterest;

@end
