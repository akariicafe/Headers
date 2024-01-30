@class NSObject;
@protocol SBSProximityHandoffUIImplementer, OS_dispatch_queue, SBSProximityHandoffUIDelegate;

@interface SBSProximityHandoffUI : NSObject

@property (retain, nonatomic) id<SBSProximityHandoffUIImplementer> sbProxy;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handoffQueue;
@property (weak, nonatomic) id<SBSProximityHandoffUIDelegate> delegate;

- (void)cancel:(id)a0;
- (id)initWithProxy:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)complete;
- (void)start;
- (BOOL)_shouldTransition;
- (void)_transition:(unsigned long long)a0;
- (void)_queueTransition:(unsigned long long)a0;
- (id)_stateDescription:(unsigned long long)a0;
- (void)updateIntensity:(float)a0;

@end
