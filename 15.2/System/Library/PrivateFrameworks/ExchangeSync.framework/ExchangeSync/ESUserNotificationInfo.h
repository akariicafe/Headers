@class NSString;

@interface ESUserNotificationInfo : NSObject {
    id /* block */ _handler;
}

@property (copy, nonatomic) NSString *groupIdentifier;

- (id /* block */)handler;
- (void).cxx_destruct;
- (void)setHandler:(id /* block */)a0;

@end
