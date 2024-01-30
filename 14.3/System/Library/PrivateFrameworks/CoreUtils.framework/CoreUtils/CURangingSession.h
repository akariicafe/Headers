@class NSString, NSArray, PRContactWhitelist, NSObject, PRSharingSession;
@protocol OS_dispatch_queue;

@interface CURangingSession : NSObject <PRSharingSessionDelegate> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _peersChanged;
    NSArray *_peersRanging;
    PRContactWhitelist *_prResponder;
    int _prRangingInitiated;
    PRSharingSession *_prRangingSession;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) id /* block */ measurementHandler;
@property (copy, nonatomic) id /* block */ measurementHandlerEx;
@property (copy, nonatomic) NSArray *peers;
@property (copy, nonatomic) id /* block */ statusChangedHandler;
@property (readonly, nonatomic) unsigned int statusFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addSample:(id)a0;
- (void)dealloc;
- (void)_updateInitiator;
- (void)_updateResponder;
- (void)session:(id)a0 didChangeProximitySensorState:(unsigned long long)a1;
- (void)_invalidated;
- (void)session:(id)a0 didFailwithError:(id)a1;
- (void)activate;
- (void)_update;
- (void)_invalidate;
- (void)_updatePeers;
- (void)session:(id)a0 didEstimateScores:(id)a1;
- (void)invalidate;

@end
