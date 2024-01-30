@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {
    unsigned int _assertion;
    NSString *_identifier;
    NSArray *_stack;
}

@property (nonatomic) double timeout;

- (id)initWithIdentifier:(id)a0 timeout:(double)a1;
- (void)dealloc;
- (void)timedout;

@end
