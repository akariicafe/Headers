@class NSString;

@interface BMSource : NSObject <BMSourceProtocol>

@property (readonly, nonatomic) NSString *identifier;

- (void)sendEvent:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)sendEvent:(id)a0 timestamp:(double)a1;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)logMetrics;

@end
