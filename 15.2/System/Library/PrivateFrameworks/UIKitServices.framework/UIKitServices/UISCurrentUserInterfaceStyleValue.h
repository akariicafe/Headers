@interface UISCurrentUserInterfaceStyleValue : NSObject {
    int _notificationToken;
}

@property (readonly, nonatomic) long long userInterfaceStyle;

- (id)initWithChangesDeliveredOnQueue:(id)a0 toBlock:(id /* block */)a1;
- (id)init;
- (void)dealloc;

@end
