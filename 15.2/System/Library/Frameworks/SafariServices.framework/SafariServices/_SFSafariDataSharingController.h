@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _SFSafariDataSharingController : NSObject {
    NSObject<OS_dispatch_queue> *_dataSharingQueue;
    NSMutableArray *_appBundlesWithSeparateData;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (id)init;
- (id)systemDataContainerURLWithAppBundleID:(id)a0;
- (void)checkInAppBundleIDIfNeeded:(id)a0;
- (void)_loadAppBundlesWithSeparateDataIfNeeded;
- (void)clearAllWebsitesData;

@end
