@class NSObject, NSMutableArray, CalLogFilter;
@protocol OS_dispatch_group, CalLogWriter, OS_dispatch_queue;

@interface CalLogNode : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSMutableArray *subnodes;
@property (retain, nonatomic) NSMutableArray *accumulator;
@property (retain, nonatomic) CalLogFilter *filter;
@property (nonatomic) unsigned long long accumulatorBufferSize;
@property (retain, nonatomic) id<CalLogWriter> writer;

- (BOOL)flush;
- (id)init;
- (void).cxx_destruct;
- (void)flushAccumulator;
- (void)addSubnode:(id)a0;
- (id)allSubnodes;
- (void)clearAccumulator;
- (int)minimumLevelOfNodeTree;
- (void)processEnvelope:(id)a0;
- (void)removeSubnode:(id)a0;

@end
