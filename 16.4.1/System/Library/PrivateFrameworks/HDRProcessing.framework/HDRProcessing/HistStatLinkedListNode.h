@interface HistStatLinkedListNode : NSObject

@property long long streamId;
@property unsigned long long numOfProcessedFrames;
@property float *minValBuffer;
@property float *maxValBuffer;
@property float *avgValBuffer;
@property float *stdValBuffer;
@property float **prctValBuffer;
@property float prevAvgVal;
@property float prevMaxVal;
@property float *prevNormHistHeight;
@property double *targetMaxBuffer;
@property (retain) HistStatLinkedListNode *next;
@property (retain) HistStatLinkedListNode *prev;

- (void)dealloc;
- (void).cxx_destruct;
- (void)detachAllNodes;
- (id)initWithStreamId:(long long)a0 bufferSize:(unsigned short)a1;

@end
