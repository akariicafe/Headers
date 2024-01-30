@class FTMessageDelivery, NSArray;

@interface FTRegionSupport : NSObject

@property (retain) FTMessageDelivery *delivery;
@property (retain) NSArray *regions;
@property (readonly) BOOL isLoaded;
@property (readonly) BOOL isLoading;

+ (id)sharedInstance;

- (void)startLoading;
- (id)regionForID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_buildMessageDeliveryIfNeeded;
- (void)flushRegions;

@end
