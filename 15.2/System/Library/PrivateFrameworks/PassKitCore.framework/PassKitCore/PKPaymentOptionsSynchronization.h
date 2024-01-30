@protocol PKPaymentOptionsSynchronizationDelegate;

@interface PKPaymentOptionsSynchronization : NSObject

@property (nonatomic) BOOL shouldSyncToCloud;
@property (weak, nonatomic) id<PKPaymentOptionsSynchronizationDelegate> delegate;

+ (BOOL)shouldSyncToCloud;

- (void)_updateSynchronizationBehavior;
- (void).cxx_destruct;
- (id)init;
- (void)_localeDidChangeNotification:(id)a0;

@end
