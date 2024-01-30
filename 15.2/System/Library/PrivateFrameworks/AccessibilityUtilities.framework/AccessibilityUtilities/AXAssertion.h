@class NSString;

@interface AXAssertion : NSObject

@property (retain, nonatomic) NSString *assertionType;
@property (retain, nonatomic) NSString *identifier;

+ (id)assertionWithType:(id)a0 identifier:(id)a1;
+ (void)ensureAssertionsHaveBeenProcessedWithCompletion:(id /* block */)a0;

- (void)_notifyServerAssertionWasAcquired;
- (void)_notifyServerAssertionWasRelinquished;
- (BOOL)_hasValidAssertionType;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 identifier:(id)a1;
- (void)dealloc;

@end
