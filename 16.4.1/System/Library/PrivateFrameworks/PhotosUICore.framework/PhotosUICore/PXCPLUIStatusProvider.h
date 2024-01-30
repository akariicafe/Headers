@class NSString, PXObservable, PXCPLActionManager, PXCPLUIStatus, NSDate;
@protocol PXCPLStatusProvider;

@interface PXCPLUIStatusProvider : PXObservable <PXChangeObserver> {
    PXObservable<PXCPLStatusProvider> *_statusProvider;
    long long _runningAction;
}

@property (copy, nonatomic) NSDate *currentDateForTesting;
@property (readonly, nonatomic) PXCPLUIStatus *status;
@property (readonly, nonatomic) PXCPLActionManager *actionManager;
@property (readonly, nonatomic) unsigned long long presentationStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithActionManager:(id)a0 presentationStyle:(unsigned long long)a1;
- (void)_statusDidChange:(id)a0;
- (void)_resetRunningAction;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithActionManager:(id)a0 statusProvider:(id)a1 presentationStyle:(unsigned long long)a2;
- (void)_updateStatus;
- (void)_performAction:(long long)a0 forCPLUIStatus:(id)a1;
- (id)init;
- (id)initWithActionManager:(id)a0;
- (void).cxx_destruct;

@end
