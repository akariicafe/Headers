@class NSNumber, NSObject;
@protocol OS_dispatch_queue, NSObject;

@interface BRCContainerCellularSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_isCellularEnabledForDocumentsAndData;
    id<NSObject> _accountDidChangeNotificationObserver;
}

+ (id)containerCellularSettings;

- (void)_accountDidChange;
- (id)initWithPersonaID:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCellularEnabled;
- (void)dealloc;

@end
