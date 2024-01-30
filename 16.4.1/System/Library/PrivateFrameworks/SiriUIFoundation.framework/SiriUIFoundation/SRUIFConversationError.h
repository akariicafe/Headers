@interface SRUIFConversationError : NSError

+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 localizedFailureReason:(id)a1;

- (id)initWithCode:(long long)a0;
- (id)initWithCode:(long long)a0 localizedFailureReason:(id)a1;
- (id)initWithCode:(long long)a0 userInfo:(id)a1;

@end
