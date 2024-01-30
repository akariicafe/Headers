@interface PAAccessoryManager : NSObject

@property (nonatomic) BOOL shouldSendUpdate;

+ (id)sharedInstance;

- (id)init;
- (void)sendUpdateToAccessory;

@end
