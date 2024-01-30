@class NSString, NSXPCConnection;
@protocol SBSProximityHandoffUIDelegate, SBSImplementer;

@interface SBSProximityHandoffUI : NSObject <SBSProximityHandoffUICallerDelegate> {
    NSXPCConnection *_sbConnection;
    id<SBSImplementer> _sbProxy;
}

@property (weak, nonatomic) id<SBSProximityHandoffUIDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel:(id)a0;
- (void)complete;
- (void)start;
- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handoffCancelled;
- (void)handoffCompleted;
- (void)handoffInactive;
- (void)handoffStarted;
- (void)handoffUpdating;
- (void)updateIntensity:(float)a0;

@end
