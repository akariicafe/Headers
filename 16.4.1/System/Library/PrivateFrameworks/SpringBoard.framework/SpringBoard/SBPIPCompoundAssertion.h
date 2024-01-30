@class NSString, NSMapTable;

@interface SBPIPCompoundAssertion : NSObject {
    NSMapTable *_controllerToStashAssertionMap;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long reason;

- (id)initWithIdentifier:(id)a0 reason:(long long)a1;
- (void)addAssertionForController:(id)a0 windowScene:(id)a1;
- (void)dealloc;
- (void)removeAssertionForController:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
