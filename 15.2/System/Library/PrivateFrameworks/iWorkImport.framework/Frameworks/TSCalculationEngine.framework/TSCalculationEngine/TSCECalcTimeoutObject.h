@class NSString;

@interface TSCECalcTimeoutObject : NSObject

@property (readonly) double timeoutInterval;
@property (readonly) NSString *blockingIdentifier;

- (id)initWithTimeout:(double)a0;
- (void).cxx_destruct;

@end
