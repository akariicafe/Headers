@class NSString, NSObject;

@interface NTKDarwinNotificationCenterObserver : NSObject

@property (weak, nonatomic) NSObject *observerObject;
@property (copy, nonatomic) NSString *notificationName;
@property (nonatomic) SEL selector;
@property (copy, nonatomic) id /* block */ block;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
