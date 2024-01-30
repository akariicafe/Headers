@class NSString, NSDictionary, SBSRemoteAlertHandle, STKSessionAction, NSObject;
@protocol STKSound, STKAlertSessionResponseProvider, OS_os_log;

@interface STKAlertSession : NSObject <SBSRemoteAlertHandleObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<STKAlertSessionResponseProvider> _responseProvider;
    SBSRemoteAlertHandle *_alertHandle;
    BOOL _needsResponse;
    BOOL _invalidated;
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) BOOL hasSentResponse;
@property (readonly, nonatomic) NSDictionary *options;
@property (retain, nonatomic) id<STKSound> sound;
@property (readonly, nonatomic) STKSessionAction *alertAction;
@property (readonly, nonatomic) SBSRemoteAlertHandle *alertHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_requiresResponseProvider;

- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)sendResponse:(long long)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)sendResponse:(long long)a0 withStringResult:(id)a1;
- (void)presentRemoteAlertHandle:(id)a0 withAction:(id)a1;
- (void)_lock_sendResponse:(long long)a0;
- (id)initWithLogger:(id)a0 responseProvider:(id)a1 options:(id)a2 sound:(id)a3;

@end
