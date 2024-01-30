@class NSObject, _CDClientContext, NSDictionary, _CDContextualPredicate, _CDContextualKeyPath, _CDContextualChangeRegistration;
@protocol OS_dispatch_semaphore;

@interface SunriseSunsetProvider : NSObject {
    _CDClientContext *_duetContextStore;
    _CDContextualKeyPath *_duetKeyPath;
    _CDContextualChangeRegistration *_duetRegistration;
    NSDictionary *_duetInfo;
    NSObject<OS_dispatch_semaphore> *_duetDispatchSemaphore;
    BOOL _sunriseSunsetNotificationEnabled;
    id /* block */ _callbackBlock;
    id /* block */ _duetCallback;
    _CDContextualPredicate *_predicate;
}

@property int logLevel;

- (void)cancel;
- (id)initWithCallback:(id /* block */)a0;
- (void)dealloc;
- (void)updateSunriseSunsetInfo;
- (void)unregisterNotification;
- (id)copySunsetSunriseInfoFromContext;
- (void)registerBlock:(id /* block */)a0;
- (void)unregisterBlock;
- (id)copySunriseSunsetInfo:(int)a0;

@end
