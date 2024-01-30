@protocol TPSEventsProviderDelegate;

@interface TPSEventsProvider : NSObject

@property (weak, nonatomic) id<TPSEventsProviderDelegate> delegate;

- (void)queryEvents:(id)a0;
- (void)registerEventsForCallback:(id)a0;
- (void).cxx_destruct;
- (void)deregisterAllEventsForCallback;
- (void)registerEventsForWakingCallback:(id)a0 clientIdentifier:(id)a1;
- (void)deregisterEventsForCallback:(id)a0;

@end
