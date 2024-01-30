@interface SXRepeatedLayoutTask : SXLayoutTask

@property (readonly, nonatomic) unsigned long long repeatCount;
@property (readonly, nonatomic) double elapsedDuration;

- (id)initWithTask:(id)a0 result:(id)a1;

@end
