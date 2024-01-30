@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification {
    NSString *name;
    id object;
    NSDictionary *userInfo;
}

- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (id)object;
- (void)dealloc;
- (id)userInfo;
- (id)name;

@end
