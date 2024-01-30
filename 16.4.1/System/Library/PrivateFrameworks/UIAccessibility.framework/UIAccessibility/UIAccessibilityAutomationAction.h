@class NSString;

@interface UIAccessibilityAutomationAction : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SEL selector;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 selector:(SEL)a1;

@end
