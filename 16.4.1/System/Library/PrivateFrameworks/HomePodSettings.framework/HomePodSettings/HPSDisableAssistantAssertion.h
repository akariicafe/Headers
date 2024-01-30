@class NSString, HPSAssertion;

@interface HPSDisableAssistantAssertion : NSObject <HPSAssertionProtocol>

@property (class, readonly, copy, nonatomic) NSString *label;

@property (retain, nonatomic) HPSAssertion *assertion;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 connectionProvider:(id)a1;

@end
