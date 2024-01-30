@class PXContentPrivacyController, NSString, NSUndoManager, NSDate;

@interface PXUndoActionsInvalidator : NSObject <PXChangeObserver>

@property (retain, nonatomic) NSUndoManager *undoManager;
@property (retain, nonatomic) PXContentPrivacyController *privacyController;
@property (nonatomic, getter=isObservingApplicationState) BOOL observingApplicationState;
@property (retain, nonatomic) NSDate *lastBackgroundingDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (void)beginObservingSystemEventsForAutomaticInvalidation;
- (void)clearUndoStack;
- (void)clearUndoStackIfNeeded;
- (id)initWithUndoManager:(id)a0 privacyController:(id)a1;
- (void)stopObservingSystemEventsForAutomaticInvalidation;
- (void)updateLastBackgroundDate;

@end
