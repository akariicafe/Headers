@class AXMAudioDataSource;

@interface AXMAudioEffect : NSObject

@property (weak, nonatomic) AXMAudioDataSource *inputSource;

- (void).cxx_destruct;
- (void)processSamples:(unsigned long long)a0;

@end
