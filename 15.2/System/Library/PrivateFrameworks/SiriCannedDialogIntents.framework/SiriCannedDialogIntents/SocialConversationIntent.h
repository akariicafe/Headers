@class NSString;

@interface SocialConversationIntent : INIntent

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *intentType;

- (id)init;
- (id)initWithCoder:(id)a0;

@end
