@class NSMutableArray;

@interface HUPosterFrameViewCache : NSObject

@property (retain, nonatomic) NSMutableArray *posterFrameViewQueue;

+ (void)purgeCache;
+ (id)sharedCache;
+ (id)dequeuePosterFrameViewForWidth:(double)a0;
+ (void)enqueuePosterFrameView:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
