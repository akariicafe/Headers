@class NSMutableDictionary, NSTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _UIDefaultFocusSoundPlayer : NSObject <_UIFocusSoundPlayer>

@property (retain, nonatomic) NSMutableDictionary *urlPools;
@property (retain, nonatomic) NSMutableDictionary *focusSoundPools;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *soundQueue;
@property (retain, nonatomic) NSTimer *unregisterTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_registerForSystemSoundsIfNecessary;
- (void)_playSystemSound:(unsigned int)a0 withVolume:(double)a1 pan:(double)a2;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (void)playSoundWithFocusSound:(long long)a0 volume:(double)a1 pan:(double)a2;
- (void)playSoundWithURL:(id)a0 volume:(double)a1 pan:(double)a2;

@end
