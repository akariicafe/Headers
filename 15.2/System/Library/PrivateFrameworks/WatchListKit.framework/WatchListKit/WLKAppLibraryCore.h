@class NSXPCConnection, PSSSSubscriptionManagerInternal, NSObject;
@protocol OS_dispatch_queue;

@interface WLKAppLibraryCore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    PSSSSubscriptionManagerInternal *_subscriptionManager;
}

+ (id)sharedInstance;

- (id)_connection;
- (id)_otherBundlesOfInterest;
- (void)fetchApplications:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_nonConformingBundleList;
- (void)_fetchApplicationsInProcess:(id /* block */)a0;

@end
