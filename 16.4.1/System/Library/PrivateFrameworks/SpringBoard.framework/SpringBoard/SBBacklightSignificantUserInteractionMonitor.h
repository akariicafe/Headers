@class NSString, NSHashTable, CSCoverSheetViewController;

@interface SBBacklightSignificantUserInteractionMonitor : NSObject <CSExternalEventHandling> {
    NSHashTable *_observers;
}

@property (weak, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (BOOL)wouldHandleButtonEvent:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)handleEvent:(id)a0;
- (void)conformsToCSEventHandling;
- (void)removeObserver:(id)a0;
- (void)_notifyObserversOfSignificantUserInteraction;
- (void).cxx_destruct;

@end
