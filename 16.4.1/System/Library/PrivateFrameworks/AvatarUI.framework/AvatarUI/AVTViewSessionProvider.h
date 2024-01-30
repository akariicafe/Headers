@class AVTView, AVTFaceTrackingManager, UIView, AVTUIEnvironment, AVTViewSession, NSString, AVTViewUpdater, NSNotificationCenter;
@protocol AVTViewSessionProviderDelegate;

@interface AVTViewSessionProvider : NSObject <AVTViewSessionDelegate, AVTViewLayoutInfo>

@property (readonly, copy, nonatomic) id /* block */ viewCreator;
@property (retain, nonatomic) UIView *avtViewContainer;
@property (retain, nonatomic) AVTView *avtView;
@property (retain, nonatomic) AVTViewUpdater *avtViewUpdater;
@property (retain, nonatomic) AVTViewSession *activeSession;
@property (retain, nonatomic) AVTViewSession *pendingSession;
@property (retain, nonatomic) AVTViewSession *pausedTrackingSession;
@property (retain, nonatomic) AVTFaceTrackingManager *faceTrackingManager;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) struct CGSize { double width; double height; } avtViewBackingSize;
@property (weak, nonatomic) id<AVTViewSessionProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })backingSizeForEnvironment:(id)a0;
+ (id /* block */)creatorForAVTRecordView;
+ (id /* block */)creatorForAVTView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)activateNextSession;
- (void)createContainerAndViewIfNeeded;
- (void)didLosePrimaryStatusWithSessionToPause:(id)a0;
- (void)handleProviderReleasesPrimaryStatusNotification:(id)a0;
- (void)handleProviderTakesPrimaryStatusNotification:(id)a0;
- (id)initWithAVTViewBackingSize:(struct CGSize { double x0; double x1; })a0 viewCreator:(id /* block */)a1 environment:(id)a2;
- (void)recoverPrimaryStatus;
- (void)sessionDidTearDown:(id)a0;
- (id)sessionWithDidBecomeActiveHandler:(id /* block */)a0 tearDownHandler:(id /* block */)a1;

@end
