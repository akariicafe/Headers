@class NSXPCConnection, PSSSSubscriptionManagerInternal, NSObject;
@protocol OS_dispatch_queue;

@interface WLKAppLibraryCore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    PSSSSubscriptionManagerInternal *_subscriptionManager;
}

+ (id)sharedInstance;

- (id)_otherBundlesOfInterest;
- (id)_nonConformingBundleList;
- (void)fetchApplications:(id /* block */)a0;
- (id)init;
- (void)_fetchApplicationsInProcess:(id /* block */)a0;
- (id)_connection;
- (void).cxx_destruct;

@end
