@class FTMessageDelivery, NSArray;

@interface FTRegionSupport : NSObject

@property (retain) FTMessageDelivery *delivery;
@property (retain) NSArray *regions;
@property (readonly) BOOL isLoaded;
@property (readonly) BOOL isLoading;

+ (id)sharedInstance;

- (void)startLoading;
- (void)dealloc;
- (void).cxx_destruct;
- (id)regionForID:(id)a0;
- (void)_buildMessageDeliveryIfNeeded;
- (void)flushRegions;

@end
