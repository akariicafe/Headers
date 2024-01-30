@class NSString;

@interface SiriActivityAssertion : NSObject <SiriAssertion> {
    id /* block */ _invalidationBlock;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSString *reference;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0 reference:(id)a1 reason:(id)a2 timestamp:(double)a3 invalidationBlock:(id /* block */)a4;
- (void)invalidatedAtTimestamp:(double)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
