@interface MSTimerGate : NSObject

@property (nonatomic) BOOL enabled;

- (void)disable;
- (void)enable;
- (id)init;

@end
