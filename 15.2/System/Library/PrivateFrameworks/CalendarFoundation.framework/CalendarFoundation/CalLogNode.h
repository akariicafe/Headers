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
- (void).cxx_destruct;
- (id)init;
- (void)addSubnode:(id)a0;
- (int)minimumLevelOfNodeTree;
- (id)allSubnodes;
- (void)processEnvelope:(id)a0;
- (void)flushAccumulator;
- (void)clearAccumulator;
- (void)removeSubnode:(id)a0;

@end
