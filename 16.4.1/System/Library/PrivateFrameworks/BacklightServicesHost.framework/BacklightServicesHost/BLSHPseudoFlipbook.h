@class NSArray, NSString, NSMutableArray;
@protocol BLSHRenderedFlipbookFrame;

@interface BLSHPseudoFlipbook : NSObject <BLSHFlipbook> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_activeFrames;
    unsigned long long _nextframeID;
}

@property (readonly, nonatomic) id<BLSHRenderedFlipbookFrame> frameOnGlass;
@property (readonly, nonatomic) id<BLSHRenderedFlipbookFrame> captureFrameOnGlass;
@property (readonly, nonatomic) id<BLSHRenderedFlipbookFrame> lastRenderedFrame;
@property (readonly, nonatomic) NSArray *activeFrames;
@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)collect;
- (id)cancelAllFrames;
- (void)renderFrameForPresentation:(id)a0 dateSpecifier:(id)a1 completion:(id /* block */)a2;

@end
