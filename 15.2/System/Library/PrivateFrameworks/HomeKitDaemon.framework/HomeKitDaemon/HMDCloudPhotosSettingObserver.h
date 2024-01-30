@class NSNotificationCenter, NSString;

@interface HMDCloudPhotosSettingObserver : HMFObject <HMFLogging>

@property (class, readonly) HMDCloudPhotosSettingObserver *sharedInstance;

@property (getter=isCloudPhotosEnabled) BOOL cloudPhotosEnabled;
@property (readonly) id /* block */ accountFactory;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccountFactory:(id /* block */)a0 notificationCenter:(id)a1;
- (void)handleAccountStoreDidChangeNotification:(id)a0;
- (BOOL)fetchCloudPhotosEnabled;

@end
