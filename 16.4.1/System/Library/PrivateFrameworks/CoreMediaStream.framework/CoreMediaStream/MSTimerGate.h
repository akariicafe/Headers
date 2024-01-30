@interface MSTimerGate : NSObject

@property (nonatomic) BOOL enabled;

- (void)enable;
- (void)disable;
- (id)init;

@end
