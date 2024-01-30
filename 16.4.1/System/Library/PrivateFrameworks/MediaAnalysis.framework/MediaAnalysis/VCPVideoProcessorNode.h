@class VNRequest;

@interface VCPVideoProcessorNode : NSObject

@property (readonly, nonatomic) VNRequest *request;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timeInterval;
@property (readonly, nonatomic) unsigned long long frameInterval;

+ (id)nodeWithRequest:(id)a0 andConfiguration:(id)a1;
+ (BOOL)validateConfiguration:(id)a0 withError:(id *)a1;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 andConfiguration:(id)a1;

@end
