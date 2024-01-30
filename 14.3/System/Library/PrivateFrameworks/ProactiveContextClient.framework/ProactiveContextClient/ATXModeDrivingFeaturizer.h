@class NSString, _PASLock;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeDrivingFeaturizer : NSObject <CARSessionObserving, ATXMotionManagerDelegate, ATXModeFeaturizer> {
    _PASLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;

- (void)sessionDidConnect:(id)a0;
- (void)stopListening;
- (id)init;
- (void).cxx_destruct;
- (void)sessionDidDisconnect:(id)a0;
- (void)beginListening;
- (id)provideFeatures;
- (void)_updateFeatures;
- (void)didUpdateMotionType:(long long)a0 isActive:(BOOL)a1;

@end
