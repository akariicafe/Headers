@class NSString;

@interface TSCECalcTimeoutObject : NSObject

@property (readonly) double timeoutInterval;
@property (readonly) NSString *blockingIdentifier;

- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0;

@end
