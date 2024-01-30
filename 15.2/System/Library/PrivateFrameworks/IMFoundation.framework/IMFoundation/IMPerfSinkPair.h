@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;

@interface IMPerfSinkPair : NSObject

@property (readonly, nonatomic) id<IMPerfProfilerBehavior> behavior;
@property (readonly, nonatomic) id<IMPerfProfilerSink> sink;

- (id)initWithBehavior:(id)a0 sink:(id)a1;
- (void).cxx_destruct;

@end
