@class CAContext;

@interface CADisplayFlipBook : NSObject {
    void *_impl;
}

@property (retain, nonatomic) CAContext *context;
@property (readonly, nonatomic) unsigned long long capacity;

+ (id)new;

- (void)purge;
- (id)description;
- (id)_initWithDisplayId:(unsigned int)a0 width:(unsigned int)a1 height:(unsigned int)a2 capacity:(unsigned long long)a3;
- (id)init;
- (void)setPurgeable;
- (BOOL)renderForTime:(double)a0 options:(id)a1 error:(id *)a2;
- (double)cancelAtTime:(double)a0;
- (void)dealloc;

@end
