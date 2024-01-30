@class IMServiceImpl, NSArray, FTRegConnectionHandler;

@interface FTRegAccountMonitor : NSObject {
    FTRegConnectionHandler *_connectionHandler;
    struct { unsigned char listeningForNotifications : 1; } _monitorFlags;
}

@property (nonatomic) long long serviceType;
@property (retain, nonatomic) IMServiceImpl *service;
@property (readonly, retain, nonatomic) NSArray *activeAccounts;

- (void)_handleDaemonConnected:(id)a0;
- (void).cxx_destruct;
- (id)logName;
- (void)_startListeningForNotifications;
- (void)dealloc;
- (id)initWithServiceType:(long long)a0;
- (void)_stopListeningForNotifications;
- (void)_handleAccountNotification:(id)a0;
- (void)_updateAccountState:(BOOL)a0;
- (id)_activeAccounts;
- (BOOL)_shouldHandleAccountNofication:(id)a0;

@end
