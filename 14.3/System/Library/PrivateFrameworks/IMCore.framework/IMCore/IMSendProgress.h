@class NSDictionary, NSTimer;
@protocol IMSendProgressTimeDataSource, IMSendProgressDelegate;

@interface IMSendProgress : NSObject {
    NSTimer *_sendProgressTimer;
    float _cachedSendProgress;
    BOOL _wasShowing;
}

@property (copy, nonatomic) NSDictionary *sendingItems;
@property (retain, nonatomic) id<IMSendProgressTimeDataSource> timeDataSource;
@property (weak, nonatomic) id<IMSendProgressDelegate> delegate;
@property (weak, nonatomic) id context;
@property (nonatomic) BOOL startSendProgressImmediately;

+ (Class)_timeDataSourceClass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void)updateForItems:(id)a0 forced:(BOOL)a1;
- (id)initWithDelegate:(id)a0 context:(id)a1;
- (BOOL)_hasSendingMessages;
- (void)_scheduleSendProgressTimerIfNeeded;
- (void)_updateSendProgress;
- (void)_resetSendProgress;
- (void)_sendProgressTimerFired:(id)a0;

@end
