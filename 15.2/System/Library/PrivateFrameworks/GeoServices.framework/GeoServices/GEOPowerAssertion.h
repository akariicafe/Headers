@class NSString;

@interface GEOPowerAssertion : NSObject {
    NSString *_identifier;
    double _timeout;
    unsigned int _assertion;
    long long _type;
}

- (id)description;
- (id)initWithType:(long long)a0 identifier:(id)a1 timeout:(double)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
