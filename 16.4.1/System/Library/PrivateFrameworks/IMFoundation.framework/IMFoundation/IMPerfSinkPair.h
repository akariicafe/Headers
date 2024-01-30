@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;

@interface IMPerfSinkPair : NSObject

@property (readonly, nonatomic) id<IMPerfProfilerBehavior> behavior;
@property (readonly, nonatomic) id<IMPerfProfilerSink> sink;

- (void).cxx_destruct;
- (id)initWithBehavior:(id)a0 sink:(id)a1;

@end
