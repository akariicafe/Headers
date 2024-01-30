@interface MDAgent : NSObject

+ (id)sharedAgent;

- (id)init;
- (void)handleLogOut;

@end
