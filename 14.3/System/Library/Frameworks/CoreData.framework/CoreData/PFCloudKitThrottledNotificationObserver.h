@class NSString;

@interface PFCloudKitThrottledNotificationObserver : NSObject {
    _Atomic int _notificationIteration;
    NSString *_assertionLabel;
}

@property (retain, nonatomic) NSString *label;
@property (nonatomic) long long notificationStalenessInterval;
@property (copy, nonatomic) id /* block */ notificationHandlerBlock;

- (void)dealloc;
- (id)initWithLabel:(id)a0;
- (void)noteRecievedNotification:(id)a0;

@end
