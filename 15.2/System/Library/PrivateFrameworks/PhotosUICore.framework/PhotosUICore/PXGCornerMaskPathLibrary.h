@class NSMutableDictionary;

@interface PXGCornerMaskPathLibrary : NSObject {
    NSMutableDictionary *_cache;
}

@property (class, readonly, nonatomic) PXGCornerMaskPathLibrary *sharedLibrary;

- (void).cxx_destruct;
- (id)init;
- (id)pathForCornerRadius:(double)a0 continuousCorners:(BOOL)a1 screenScale:(double)a2 maskColor:(id)a3;

@end
