@class NSString;

@interface TCTaggedMessage : NSObject

@property (readonly, nonatomic) int messageTag;
@property (readonly, copy, nonatomic) NSString *messageText;

+ (id)taggedMessageWithMessageText:(id)a0;

- (void).cxx_destruct;
- (id)initWithMessageText:(id)a0;

@end
