@interface FCCacheCoordinatorFlushPolicy : NSObject

@property (nonatomic) BOOL alwaysFlushKeysWithZeroInterest;
@property (nonatomic) unsigned long long highWaterMark;
@property (nonatomic) unsigned long long lowWaterMark;

- (BOOL)canPreemptiveFlushWithDataSize:(unsigned long long)a0;
- (BOOL)canFlushWithDataSize:(unsigned long long)a0;

@end
