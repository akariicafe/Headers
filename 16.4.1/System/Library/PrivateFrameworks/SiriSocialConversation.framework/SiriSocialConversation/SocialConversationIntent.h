@class NSString;

@interface SocialConversationIntent : INIntent

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *intentType;

- (id)initWithCoder:(id)a0;
- (id)init;

@end
