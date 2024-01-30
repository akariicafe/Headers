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

- (void)complete;
- (id)initWithTarget:(id)a0;
- (void)cancel:(id)a0;
- (void)dealloc;
- (id)init;
- (void)start;
- (void).cxx_destruct;
- (void)handoffInactive;
- (void)handoffUpdating;
- (void)handoffCancelled;
- (void)handoffCompleted;
- (void)handoffStarted;
- (void)startWithArtworkColors:(id)a0;
- (void)updateIntensity:(float)a0;

@end
