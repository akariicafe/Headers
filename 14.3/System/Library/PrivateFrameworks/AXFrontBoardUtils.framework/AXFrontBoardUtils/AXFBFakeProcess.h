@class NSString, AXFBFakeProcessState;

@interface AXFBFakeProcess : NSObject

@property (retain, nonatomic) AXFBFakeProcessState *state;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;

@end
