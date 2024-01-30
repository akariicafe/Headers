@class NSString, PXObservable, PXCPLActionManager, PXCPLUIStatus;
@protocol PXCPLStatusProvider;

@interface PXCPLUIStatusProvider : PXObservable <PXChangeObserver> {
    PXCPLActionManager *_actionManager;
    PXObservable<PXCPLStatusProvider> *_statusProvider;
}

@property (readonly, nonatomic) PXCPLUIStatus *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateStatus;
- (id)initWithActionManager:(id)a0;
- (id)initWithActionManager:(id)a0 statusProvider:(id)a1;
- (void)_statusDidChange:(id)a0;

@end
