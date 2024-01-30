@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification {
    NSString *name;
    id object;
    NSDictionary *userInfo;
}

- (id)userInfo;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (id)name;
- (void)dealloc;
- (id)object;

@end
