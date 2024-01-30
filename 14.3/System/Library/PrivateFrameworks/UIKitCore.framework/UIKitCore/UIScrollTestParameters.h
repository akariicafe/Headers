@class NSString, CADisplayLink;

@interface UIScrollTestParameters : NSObject <NSCopying>

@property (nonatomic) double startOffset;
@property (readonly, nonatomic) double endOffset;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *testName;
@property (nonatomic) long long iterations;
@property (nonatomic) double delta;
@property (nonatomic) double length;
@property (nonatomic) unsigned long long axis;
@property (copy, nonatomic) id /* block */ extraResultsBlock;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
