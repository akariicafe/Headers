@class OS_dispatch_queue;

@interface RemindersUICore.TTRRemindersListInteractor : NSObject <REMSaveRequestNotifyChangeDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ optimisticUpdatesDelegate;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ canChangeSortingStyle;
    void /* unknown type, empty encoding */ defaultListType;
    void /* unknown type, empty encoding */ isUnitTestMode;
    void /* unknown type, empty encoding */ removeTemplateCapability;
}

@property (nonatomic, readonly) OS_dispatch_queue *callbackQueue;

- (void)notifyEventFromSaveRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
