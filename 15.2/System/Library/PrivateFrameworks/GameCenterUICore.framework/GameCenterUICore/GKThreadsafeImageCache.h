@class NSString;

@interface GKThreadsafeImageCache : GKThreadsafeCache <GKScreenConfigurationListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationDidEnterBackground:(id)a0;
- (id)initWithName:(id)a0 maxCount:(unsigned long long)a1;
- (void)greatestScreenScaleDidChange:(double)a0;

@end
