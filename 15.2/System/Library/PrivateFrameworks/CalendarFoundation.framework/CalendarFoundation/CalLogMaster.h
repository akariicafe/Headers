@class NSArray, NSObject, CalLogNode;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CalLogMaster : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSArray *topLevelNodes;
@property (retain, nonatomic) CalLogNode *oslogNode;
@property (retain, nonatomic) CalLogNode *standardOutNode;
@property (retain, nonatomic) CalLogNode *rootConfigurationNode;
@property (retain, nonatomic) CalLogNode *userNotificationNode;
@property (nonatomic) int notificationRegistrationToken;
@property (nonatomic) BOOL hasValidNotificationRegistrationToken;
@property (nonatomic) BOOL autoFlush;

+ (id)sharedLogMaster;

- (BOOL)flush;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)loadPreferredConfiguration;
- (void)registerForConfigUpdateNotifications;
- (void)configureOSLogNode;
- (void)configureRootConfigurationNode;
- (void)reloadTopLevelNodes;
- (int)findMinimumLevel;
- (id)findPermittedList;
- (void)processEnvelope:(id)a0;
- (void)configureStandardOutNode;
- (BOOL)shouldProcessNamespace:(id)a0;

@end
