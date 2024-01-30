@interface SPDarwinNotificationHandler : NSObject

@property (nonatomic) int notifyToken;

- (id)initWithNotificationName:(id)a0 changeBlock:(id /* block */)a1;
- (void)dealloc;

@end
