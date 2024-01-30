@interface UISCurrentUserInterfaceStyleValue : NSObject {
    int _notificationToken;
}

@property (readonly, nonatomic) long long userInterfaceStyle;

- (id)init;
- (void)dealloc;
- (id)initWithChangesDeliveredOnQueue:(id)a0 toBlock:(id /* block */)a1;

@end
