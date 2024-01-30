@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject

@property (readonly, nonatomic) CMCatherineFeederInternal *internal;

- (void)dealloc;
- (id)init;
- (void)feedCatherine:(double)a0 confidence:(double)a1;

@end
