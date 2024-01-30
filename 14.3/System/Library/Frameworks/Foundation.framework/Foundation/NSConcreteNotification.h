@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification {
    NSString *name;
    id object;
    NSDictionary *userInfo;
    BOOL dyingObject;
}

+ (id)newTempNotificationWithName:(id)a0 object:(id)a1 userInfo:(id)a2;

- (id)userInfo;
- (void)recycle;
- (void)dealloc;
- (id)object;
- (id)name;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;

@end
