@class NSString, NSSet;

@interface ASDDSPGraph : NSObject

@property (readonly, nonatomic) struct shared_ptr<DSPGraph::Graph> { struct Graph *__ptr_; struct __shared_weak_count *__cntrl_; } graph;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long numberOfInputs;
@property (readonly, nonatomic) unsigned long long numberOfOutputs;
@property (readonly, nonatomic) long long sliceDurationInSamples;
@property (readonly, nonatomic) BOOL configured;
@property (readonly, nonatomic) BOOL initialized;
@property (readonly, nonatomic) NSSet *boxes;
@property (readonly, nonatomic) NSSet *inputs;
@property (readonly, nonatomic) NSSet *outputs;

- (BOOL)configure;
- (BOOL)initialize;
- (void).cxx_destruct;
- (id)init;
- (BOOL)reset;
- (id).cxx_construct;
- (BOOL)unconfigure;
- (BOOL)uninitialize;
- (BOOL)setAUStrip:(id)a0;
- (id)initWithDSPGraph:(struct shared_ptr<DSPGraph::Graph> { struct Graph *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)setVariableSliceDuration:(long long)a0 forSampleRate:(long long)a1;
- (BOOL)getParameter:(float *)a0 forID:(unsigned int)a1;
- (BOOL)hasParameter:(unsigned int)a0;
- (BOOL)setParameter:(float)a0 forID:(unsigned int)a1;
- (BOOL)getPropertySize:(unsigned int *)a0 isWritable:(BOOL *)a1 forID:(unsigned int)a2;
- (BOOL)getProperty:(void *)a0 withSize:(unsigned int *)a1 forID:(unsigned int)a2;
- (BOOL)setProperty:(const void *)a0 withSize:(unsigned int)a1 forID:(unsigned int)a2;
- (id)boxWithName:(id)a0;
- (BOOL)setPropertyStrip:(id)a0;

@end
