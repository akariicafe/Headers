@class NSString;

@interface SXPresentableMessage : NSObject

@property (readonly, copy, nonatomic) NSString *recipient;
@property (readonly, copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)initWithRecipient:(id)a0 message:(id)a1;

@end
