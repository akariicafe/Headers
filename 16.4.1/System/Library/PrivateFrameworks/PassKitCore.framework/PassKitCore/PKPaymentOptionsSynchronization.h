@protocol PKPaymentOptionsSynchronizationDelegate;

@interface PKPaymentOptionsSynchronization : NSObject

@property (nonatomic) BOOL shouldSyncToCloud;
@property (weak, nonatomic) id<PKPaymentOptionsSynchronizationDelegate> delegate;

+ (BOOL)shouldSyncToCloud;

- (void)_localeDidChangeNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateSynchronizationBehavior;

@end
