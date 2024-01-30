@class NSString;

@interface SBBaseStatusBarChangeAssertion : NSObject

@property (readonly, copy, nonatomic) NSString *reason;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (id)_initWithReason:(id)a0;

@end
