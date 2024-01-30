@class NSString, BSMachPortReceiveRight;

@interface SBSAssertion : NSObject <BSInvalidatable> {
    BSMachPortReceiveRight *_receiveRight;
}

@property (readonly, copy, nonatomic) NSString *assertionName;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAssertionName:(id)a0 reason:(id)a1 receiveRight:(id)a2;
- (id)initWithAssertionName:(id)a0 reason:(id)a1 port:(unsigned int)a2;
- (void)invalidate;

@end
