@interface SACallTreeNode : NSObject

@property unsigned long long sampleCount;
@property unsigned long long startSampleIndex;

- (id)initWithStartSampleIndex:(unsigned long long)a0 sampleCount:(unsigned long long)a1;

@end
