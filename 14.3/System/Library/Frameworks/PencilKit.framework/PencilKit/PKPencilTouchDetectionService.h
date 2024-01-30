@class NSXPCListener, FBSDisplayLayoutMonitor, NSMutableDictionary, NSDictionary, NSString, PKPencilTouchDetectionGestureRecognizer, NSUserDefaults;

@interface PKPencilTouchDetectionService : NSObject <NSXPCListenerDelegate, _PKTouchDetectionProtocol, PKPencilTouchDetectionGestureRecognizerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (nonatomic) BOOL isListening;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor;
@property (nonatomic) BOOL wereFrontBoardOverlaysEnabled;
@property (retain, nonatomic) PKPencilTouchDetectionGestureRecognizer *detectionGesture;
@property (retain, nonatomic) NSUserDefaults *pencilDefaults;
@property (retain, nonatomic) NSMutableDictionary *timestamps;
@property (retain, nonatomic) NSDictionary *userInfoForNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)beginObservingTouchesForDetection;

- (void)_nop:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset:(id)a0;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)updateTimestampForType:(long long)a0;
- (void)pencilType:(long long)a0 hasRecentlyBeenUsedWithCompletionHandler:(id /* block */)a1;
- (void)resumeConnectionIfIdle;
- (void)persistTimestamps;
- (void)postUpdateNotificationIfNecessary;
- (void)loadDefaultsIfNecessary;
- (void)loadTimestampsIfNecessary;
- (BOOL)timestampIndicatesRecentUsage:(id)a0;

@end
