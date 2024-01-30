@class NSString;

@interface SKAuthenticationResponseEvent : SKEvent

@property (readonly, copy, nonatomic) NSString *password;

- (id)descriptionWithLevel:(int)a0;
- (id)initWithPassword:(id)a0;
- (void).cxx_destruct;

@end
