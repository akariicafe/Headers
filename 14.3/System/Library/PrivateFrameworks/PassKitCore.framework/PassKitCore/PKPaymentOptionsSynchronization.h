@protocol PKPaymentOptionsSynchronizationDelegate;

@interface PKPaymentOptionsSynchronization : NSObject

@property (nonatomic) BOOL shouldSyncToCloud;
@property (weak, nonatomic) id<PKPaymentOptionsSynchronizationDelegate> delegate;

+ (BOOL)shouldSyncToCloud;

- (id)init;
- (void).cxx_destruct;
- (void)_updateSynchronizationBehavior;
- (void)_localeDidChangeNotification:(id)a0;

@end
