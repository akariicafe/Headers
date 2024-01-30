@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BWMetadataTimeMachine : NSObject {
    int _capacity;
    NSObject<OS_dispatch_queue> *_metadataHandlingQueue;
    NSMutableArray *_metadata;
    NSMutableArray *_requests;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _earliestAllowedPTS;
}

@property struct { long long x0; int x1; unsigned int x2; long long x3; } earliestAllowedPTS;

+ (void)initialize;

- (void)reset;
- (void)dealloc;
- (id)_metadataForPTSRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithCapacity:(int)a0 metadataHandlingPriority:(unsigned int)a1;
- (void)addMetadata:(id)a0;
- (id)metadataForPTSRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 timeout:(float)a1;
- (BOOL)waitUntilCapacity:(int)a0 timeout:(float)a1;

@end
