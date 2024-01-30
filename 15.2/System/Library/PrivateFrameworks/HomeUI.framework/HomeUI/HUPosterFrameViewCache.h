@class NSMutableArray;

@interface HUPosterFrameViewCache : NSObject

@property (retain, nonatomic) NSMutableArray *posterFrameViewQueue;

+ (void)purgeCache;
+ (id)sharedCache;
+ (id)dequeuePosterFrameViewForWidth:(double)a0;
+ (void)enqueuePosterFrameView:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
