@class NSString, NSNotificationCenter, NSObject;

@interface CAMBufferNotificationObservance : CAMBufferObservance

@property (readonly, copy, nonatomic) NSString *notification;
@property (readonly, weak, nonatomic) NSObject *object;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;

- (void).cxx_destruct;
- (void)fulfillWithChange:(id)a0;
- (id)initWithNotification:(id)a0 object:(id)a1 center:(id)a2 removeOnceEnabled:(BOOL)a3;
- (void)setupObservanceForBuffer:(id)a0;
- (void)teardownObservanceForBuffer:(id)a0;

@end
