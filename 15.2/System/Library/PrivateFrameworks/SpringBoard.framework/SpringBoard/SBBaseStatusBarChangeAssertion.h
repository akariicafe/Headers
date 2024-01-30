@class NSString;

@interface SBBaseStatusBarChangeAssertion : NSObject

@property (readonly, copy, nonatomic) NSString *reason;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (id)_initWithReason:(id)a0;

@end
