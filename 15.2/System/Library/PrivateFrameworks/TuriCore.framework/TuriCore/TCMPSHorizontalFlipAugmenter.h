@class NSString;

@interface TCMPSHorizontalFlipAugmenter : NSObject <TCMPSImageAugmenting>

@property (nonatomic) double skipProbability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)imageAugmentedFromImage:(id)a0 generator:(id /* block */)a1;

@end
