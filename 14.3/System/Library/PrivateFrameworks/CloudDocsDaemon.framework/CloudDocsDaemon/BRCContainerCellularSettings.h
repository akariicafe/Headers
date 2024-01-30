@class NSNumber, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface BRCContainerCellularSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_isCellularEnabledForDocumentsAndData;
    id<NSObject> _accountDidChangeNotificationObserver;
}

+ (id)_notifAccountStore;
+ (id)containerCellularSettings;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_accountDidChange;
- (BOOL)isCellularEnabled;

@end
