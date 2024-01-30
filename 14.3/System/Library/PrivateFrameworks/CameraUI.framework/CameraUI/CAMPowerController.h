@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CAMPowerController : NSObject {
    _Atomic int _assertionIdentifierGenerator;
}

@property (readonly, nonatomic) NSMutableDictionary *_assertionsByIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_powerControllerQueue;
@property (readonly, nonatomic) unsigned long long _backgroundTaskIdentifier;
@property (nonatomic, getter=_isBackgrounded, setter=_setBackgrounded:) BOOL _isBackgrounded;
@property (readonly, nonatomic) int _powerPressureNotificationToken;
@property (nonatomic, setter=_powerControllerQueue_setPowerPressureLevel:) unsigned int _powerControllerQueue_powerPressureLevel;

- (void)_applicationWillResignActive:(id)a0;
- (id)init;
- (void)_applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)powerPressureLevel;
- (id)description;
- (void)removeAssertionForIdentifier:(unsigned int)a0 withReason:(unsigned int)a1;
- (void)_endBackgroundTaskIfNeeded;
- (void)_startBackgroundTaskIfNeeded;
- (void)addAssertionForIndentifier:(unsigned int)a0 withReason:(unsigned int)a1;
- (unsigned int)generateAssertionIdentifier;

@end
