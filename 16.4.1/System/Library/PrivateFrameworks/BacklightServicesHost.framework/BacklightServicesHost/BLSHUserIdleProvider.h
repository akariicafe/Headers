@class AWAttentionAwarenessClient, AWAttentionAwarenessConfiguration, NSMutableDictionary, NSString;
@protocol BLSHUserIdleProvidingDelegate;

@interface BLSHUserIdleProvider : NSObject <BLSHUserIdleProviding>

@property (retain, nonatomic) AWAttentionAwarenessClient *attentionAwarenessClient;
@property (retain, nonatomic) AWAttentionAwarenessConfiguration *attentionAwarenessConfiguration;
@property (retain, nonatomic) NSMutableDictionary *attentionLostTimeoutDictionary;
@property (nonatomic) BOOL shouldNotifyOfUnidleChanged;
@property (weak, nonatomic) id<BLSHUserIdleProvidingDelegate> delegate;
@property (readonly, nonatomic) double idleTimeout;
@property (nonatomic) BOOL shouldNotifyOfUnidle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (void)_resume;
- (void)pause;
- (void)_pause;
- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)reset;
- (void)resume;
- (void)_setIdleTimeout:(double)a0 shouldReset:(BOOL)a1;
- (void)_setShouldNotifyOfUnidle:(BOOL)a0;
- (void)setIdleTimeout:(double)a0 shouldReset:(BOOL)a1;

@end
