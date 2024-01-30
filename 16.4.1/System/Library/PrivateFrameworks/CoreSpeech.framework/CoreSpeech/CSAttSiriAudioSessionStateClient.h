@class NSString, AFNotifyObserver, NSObject;
@protocol OS_dispatch_queue, CSAttSiriSessionStateDelegate;

@interface CSAttSiriAudioSessionStateClient : NSObject <AFNotifyObserverDelegate>

@property (retain, nonatomic) AFNotifyObserver *siriStateObserver;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateNotificationQueue;
@property (nonatomic) BOOL isSpeaking;
@property (nonatomic) BOOL isListening;
@property (nonatomic) BOOL isActiveRequest;
@property (nonatomic) BOOL isActiveSession;
@property (readonly, weak, nonatomic) id<CSAttSiriSessionStateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (id)initWithDelegate:(id)a0;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)dispatchStateChangedFrom:(unsigned long long)a0 to:(unsigned long long)a1;

@end
