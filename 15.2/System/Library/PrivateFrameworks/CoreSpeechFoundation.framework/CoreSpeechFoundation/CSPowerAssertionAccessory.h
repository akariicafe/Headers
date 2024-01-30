@class NSString;

@interface CSPowerAssertionAccessory : NSObject {
    unsigned int _assertionID;
    NSString *_name;
}

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithName:(id)a0 timeout:(double)a1;

@end
