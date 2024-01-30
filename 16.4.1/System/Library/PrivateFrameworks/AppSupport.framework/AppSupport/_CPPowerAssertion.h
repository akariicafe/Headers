@class NSString, NSArray;

@interface _CPPowerAssertion : NSObject {
    unsigned int _assertion;
    NSString *_identifier;
    NSArray *_stack;
}

@property (nonatomic) double timeout;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0 timeout:(double)a1;
- (void)timedout;

@end
