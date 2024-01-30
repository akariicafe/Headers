@class NSString;

@interface GEOPowerAssertion : NSObject {
    NSString *_identifier;
    double _timeout;
    unsigned int _assertion;
    long long _type;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(long long)a0 identifier:(id)a1 timeout:(double)a2;
- (id)description;

@end
