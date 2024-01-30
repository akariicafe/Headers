@class PXCPLStatus, NSString;

@interface PXMockCPLStatusProvider : PXObservable <PXSettingsKeyObserver, PXCPLStatusProvider>

@property (class, readonly) BOOL shouldUseMockService;

@property (retain, nonatomic) PXCPLStatus *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_currentMockedStatus;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (double)nextOverrideResumeTimeInterval;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_updateStatus;

@end
