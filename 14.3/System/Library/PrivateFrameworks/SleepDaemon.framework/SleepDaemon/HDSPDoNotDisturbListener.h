@class HDSPContextStoreManager;
@protocol HDSPDoNotDisturbListenerDelegate;

@interface HDSPDoNotDisturbListener : NSObject

@property (readonly, nonatomic) HDSPContextStoreManager *contextStoreManager;
@property (weak, nonatomic) id<HDSPDoNotDisturbListenerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithContextStoreManager:(id)a0;
- (void)startListening;
- (void)_processCoreDuetCallbackWithNewDNDState:(id)a0 oldDNDState:(id)a1;

@end
