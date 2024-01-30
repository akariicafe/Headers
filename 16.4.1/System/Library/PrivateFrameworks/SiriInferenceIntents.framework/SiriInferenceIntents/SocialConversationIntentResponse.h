@class NSString;

@interface SocialConversationIntentResponse : INIntentResponse

@property (nonatomic, copy) NSString *catID;
@property (nonatomic, copy) NSString *dialogID;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
