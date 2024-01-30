@interface VFXEngine : NSObject {
    void /* unknown type, empty encoding */ externalDrawCallQuery;
    void /* unknown type, empty encoding */ transientDrawCall;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ scene;
@property (nonatomic, retain) void /* unknown type, empty encoding */ pointOfView;
@property (nonatomic, readonly) void *opaqueECS;
@property (nonatomic, readonly) float deltaTime;

- (id)init;
- (void).cxx_destruct;
- (long long)drawCallCount;
- (void)enumerateDrawCall:(id /* block */)a0;
- (id /* block */)recycleBuffersGetCompletion;
- (void)updateWithDeltaTime:(double)a0;

@end
