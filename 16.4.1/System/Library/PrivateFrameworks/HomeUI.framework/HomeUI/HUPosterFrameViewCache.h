@class NSMutableArray;

@interface HUPosterFrameViewCache : NSObject

@property (retain, nonatomic) NSMutableArray *posterFrameViewQueue;

+ (id)sharedCache;
+ (void)purgeCache;
+ (id)dequeuePosterFrameViewForWidth:(double)a0;
+ (void)enqueuePosterFrameView:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
