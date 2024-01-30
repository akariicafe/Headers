@class NSString;

@interface PFCloudKitThrottledNotificationObserver : NSObject {
    _Atomic int _notificationIteration;
    NSString *_assertionLabel;
    NSString *_label;
    long long _notificationStalenessInterval;
    id /* block */ _notificationHandlerBlock;
}

- (id)initWithLabel:(id)a0;
- (void)dealloc;

@end
