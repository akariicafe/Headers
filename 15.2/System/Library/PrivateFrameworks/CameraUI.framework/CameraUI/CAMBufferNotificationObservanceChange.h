@class NSString, NSObject;

@interface CAMBufferNotificationObservanceChange : CAMBufferObservanceChange

@property (readonly, copy, nonatomic) NSString *notification;
@property (readonly, weak, nonatomic) NSObject *object;

- (id)initWithNotification:(id)a0 object:(id)a1;
- (void).cxx_destruct;

@end
