@class NSString, NSObject;
@protocol OS_dispatch_group, OS_dispatch_source;

@interface BRCAutoCancelOperation : _BRCOperation <BRCOperationSubclass> {
    NSObject<OS_dispatch_group> *_observersGroup;
    NSObject<OS_dispatch_source> *_cancelTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (BOOL)hasObservers;
- (id)createActivity;
- (void)beginObservingChanges;
- (void)dealloc;
- (BOOL)shouldRetryForError:(id)a0;
- (void)endObservingChanges;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 syncContext:(id)a1 group:(id)a2;
- (void)_initializeCancelTimer;

@end
