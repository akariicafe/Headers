@class NSString, NSDictionary;

@interface IMPowerAssertion : NSObject {
    unsigned int _assertion;
    NSString *_identifier;
    NSDictionary *_properties;
}

- (id)initWithIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 timeout:(double)a1;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 timeoutSec:(double)a1 properties:(id)a2;

@end
