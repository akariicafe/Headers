@class NSString, CATRemoteTaskOperation;
@protocol CRKRequestPerformingProtocol;

@interface CRKSettingsUIVisibleRemoteValue : NSObject <CATTaskOperationNotificationDelegate> {
    id<CRKRequestPerformingProtocol> mDaemonProxy;
    CATRemoteTaskOperation *mSubscriptionOperation;
}

@property (nonatomic) long long settingsUIVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)taskOperation:(id)a0 didPostNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)endUpdating;
- (void)settingsUIVisibilitySubscriptionOperationDidFinish:(id)a0;
- (BOOL)isCurrentSubscriptionOperation:(id)a0;
- (void)settingsUIVisibleDidChange:(BOOL)a0;
- (id)initWithDaemonProxy:(id)a0;
- (void)beginUpdating;

@end
