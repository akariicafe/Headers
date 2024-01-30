@interface UISCurrentUserInterfaceStyleValue : NSObject {
    int _notificationToken;
}

@property (readonly, nonatomic) long long userInterfaceStyle;

- (id)initWithChangesDeliveredOnQueue:(id)a0 toBlock:(id /* block */)a1;
- (void)dealloc;
- (id)init;

@end
