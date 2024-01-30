@class NSObject;
@protocol OS_dispatch_queue;

@interface CHIPCluster : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *chipWorkQueue;

- (void).cxx_destruct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;

@end
