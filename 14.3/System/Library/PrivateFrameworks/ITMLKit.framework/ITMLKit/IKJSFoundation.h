@class IKAppContext, NSMutableDictionary;
@protocol IKAppDeviceConfig;

@interface IKJSFoundation : NSObject

@property (weak, nonatomic) IKAppContext *appContext;
@property (retain, nonatomic) NSMutableDictionary *jsTimers;
@property (retain, nonatomic) NSMutableDictionary *dateFormatterCache;
@property (weak, nonatomic) id<IKAppDeviceConfig> deviceConfig;

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0 deviceConfig:(id)a1;
- (void)stopTimers;
- (id)setInterval:(id)a0 time:(long long)a1;
- (void)clearInterval:(id)a0;
- (id)setTimeout:(id)a0 time:(long long)a1;
- (void)clearTimeout:(id)a0;
- (void)clearCookies;
- (id)getCookieForURL:(id)a0 useSSCookieStorage:(BOOL)a1;
- (void)setCookie:(id)a0 useSSCookieStorage:(BOOL)a1;
- (id)_startTimer:(id)a0 time:(long long)a1 repeating:(BOOL)a2;
- (void)_clearTimer:(id)a0;
- (void)_jsTimerFired:(id)a0;
- (id)_stringForKey:(id)a0 fromDict:(id)a1;

@end
