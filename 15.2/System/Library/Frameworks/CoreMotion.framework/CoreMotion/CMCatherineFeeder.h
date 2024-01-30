@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject

@property (readonly, nonatomic) CMCatherineFeederInternal *internal;

- (void)feedCatherine:(double)a0 confidence:(double)a1;
- (id)init;
- (void)dealloc;

@end
